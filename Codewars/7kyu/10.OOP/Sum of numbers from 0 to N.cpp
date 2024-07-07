// https://www.codewars.com/kata/56e9e4f516bcaa8d4f001763/train/cpp
#include <iostream>
#include <string>

using namespace std;

class SequenceSum{
    int count;
    public:
    SequenceSum (int);
    string showSequence();
    
};

string SequenceSum::showSequence(){
    if (count==0) return "0=0";
    if (count<0) return std::to_string(count) + "<0";
    string result;
    int sum {};
    for (int i {}; i<=count; i++) {
        result += std::to_string(i) + "+";
        sum += i;
    }
    result.pop_back();
    result += " = " + std::to_string(sum);

    return result;
}

SequenceSum::SequenceSum (int c) {
    count = c;
}

int main() {
    SequenceSum one(6);
    std::cout << one.showSequence() << std::endl;  // "0+1+2+3+4+5+6 = 21"

    return 0;
}
//
#include <sstream>
#include <string>

using namespace std;

class SequenceSum{
    int count;
    public:
    SequenceSum (int);
    string showSequence();
};

SequenceSum::SequenceSum (int c) {
    count = c;
}

string SequenceSum::showSequence(){
    if (count < 0) return to_string(count) + "<0";
    if (!count) return "0=0";
    stringstream ss; ss << 0;
    for (int i = 1; i <= count; ++i)
      ss << '+' << i;
    ss << " = " << count * (count+1) / 2;
    return ss.str();
}
