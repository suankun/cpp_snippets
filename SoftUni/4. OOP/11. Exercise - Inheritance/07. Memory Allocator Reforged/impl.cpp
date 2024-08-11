#include "Defines.h"

#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

class MemoryHelper {
    std::vector<MemoryNode> & memory;

public:
    MemoryHelper(std::vector<MemoryNode> & memory) : memory(memory) {}

    size_t getSize() const { return memory.size(); }

    const MemoryNode & getAt(int index) const { return memory[index]; }

    void setAt(int index, MemoryType type) {
        memory[index].memoryType = type;
    }
};

class Command {
    ErrorCode result;

public:
    Command() : result(ErrorCode::EXECUTE_SUCCESS) {}

    ErrorCode getResult() const { return result; }
    void setResult(ErrorCode ec) { result = ec; }
};

class DualParameterCommand : public Command {
protected:
    MemoryHelper & memory;
    MemoryType type;
    int index;

public:
    DualParameterCommand(MemoryHelper & memory, istream & istr)
        : memory(memory), type(MemoryType::UNKNOWN), index(-1)
    {
        string strType;
        istr >> strType >> index;

        if (strType == "Single")
            type = MemoryType::SINGLE; // Fixing the assignment
        else if (strType == "Multiple")
            type = MemoryType::MULTIPLE;

        if (index < 0 || index >= memory.getSize())
            setResult(ErrorCode::ALLOCATE_DEALLOCATE_MISMATCH);
    }
};

class AllocateCommand : public DualParameterCommand {
public:
    AllocateCommand(MemoryHelper & memory, istream & istr) : DualParameterCommand(memory, istr)
    {
        if (getResult() != ErrorCode::EXECUTE_SUCCESS)
            return;

        const MemoryNode & curMem = memory.getAt(index);
        if (curMem.memoryType != MemoryType::UNKNOWN) {
            setResult(ErrorCode::MEMORY_LEAK);
            return;
        }

        memory.setAt(index, type);
    }
};

class DeallocateCommand : public DualParameterCommand {
public:
    DeallocateCommand(MemoryHelper & memory, istream & istr) : DualParameterCommand(memory, istr)
    {
        if (getResult() != ErrorCode::EXECUTE_SUCCESS)
            return;

        MemoryType curMem = (MemoryType)memory.getAt(index).memoryType;
        if (curMem == MemoryType::UNKNOWN) {
            setResult(ErrorCode::DOUBLE_FREE);
            return;
        }

        if (curMem != type) {
            setResult(ErrorCode::ALLOCATE_DEALLOCATE_MISMATCH);
            return;
        }

        memory.setAt(index, MemoryType::UNKNOWN);
    }
};

ErrorCode executeCommand(const std::string & command, std::vector<MemoryNode> & memory) {
    MemoryHelper mh(memory);

    istringstream istr(command);

    string cmdStr;
    istr >> cmdStr;

    if (cmdStr == "Allocate")
        return AllocateCommand(mh, istr).getResult();
    else if (cmdStr == "Deallocate")
        return DeallocateCommand(mh, istr).getResult();

    return ErrorCode::ALLOCATE_DEALLOCATE_MISMATCH;
}

void printResult(const ErrorCode errorCode, const std::string & command) {
    ostringstream ostr;

    ostr << command << " - ";

    switch (errorCode)
    {
    case ErrorCode::EXECUTE_SUCCESS:
        ostr << "success";
        break;
    case ErrorCode::DOUBLE_FREE:
        ostr << "system crash prevented, will skip this deallocation";
        break;
    case ErrorCode::ALLOCATE_DEALLOCATE_MISMATCH:
        ostr << "Warning allocate/deallocate mismatch, will skip this deallocation";
        break;
    case ErrorCode::MEMORY_LEAK:
        ostr << "memory leak prevented, will not make allocation";
        break;
    }

    cout << ostr.str() << endl;
}
