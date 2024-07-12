#ifndef OPERATORS_H 
#define OPERATORS_H 
 
#include <ostream> 
#include <vector> 
#include <string> 
#include <sstream> 
 

std::vector<std::string> & operator << (std::vector<std::string> & vec, const std::string & str) {
    vec.push_back(str);

    return vec;
}

std::string operator + (const std::string & numberedLine, const int & i) {
    std::ostringstream ostr;
    ostr << numberedLine << i;

    return ostr.str();
}

std::ostream & operator << (std::ostream & out, const std::vector<std::string> & vec) {
    for (const std::string & line : vec)
        out << line << std::endl;

    return out;
}

#endif // !OPERATORS_H