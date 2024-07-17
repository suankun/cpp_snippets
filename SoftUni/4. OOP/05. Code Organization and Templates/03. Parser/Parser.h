#ifndef _PARSER_H_
#define _PARSER_H_

#include <istream>
#include <sstream>
#include <string>

template<typename T>
class Parser {
    std::istream & in;
    std::string mStopline;

    public:

        Parser(std::istream & in, std::string stopLine)
            : in(in),  mStopline(stopLine) {}

        bool readNext(T & readData) {
            
            std::string line;
            getline(in, line);
            if (line == mStopline)
                return false;

            std::istringstream istr(line);
            istr >> readData;

            return true;
        }

        

};



#endif // _PARSER_H_