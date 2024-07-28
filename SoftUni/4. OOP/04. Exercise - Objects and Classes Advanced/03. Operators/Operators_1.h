#ifndef OPERATORS_H 
#define OPERATORS_H 
 
#include <ostream> 
#include <vector> 
#include <string> 
#include <sstream> 
 
std::vector<std::string> & operator<< (std::vector<std::string> & v, const std::string & str) {
    v.push_back(str);
    return v;
}

std::ostream & operator<< (std::ostream & out, std::vector<std::string> v) {
    for (int i = 0; i < v.size(); i++)
        out << v[i] << std::endl;
    return out;
}

std::string operator+ (std::string & str, int num) {
    return str + std::to_string(num);
}


#endif // !OPERATORS_H