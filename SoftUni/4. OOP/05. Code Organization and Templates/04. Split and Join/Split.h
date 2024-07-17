#ifndef _SPLIT_H_
#define _SPLIT_H_

#include <string>
#include <vector>
#include <sstream>

template<typename T>
std::vector<T> split(std::string & line, char separator) {
    std::vector<T> res;

    std::istringstream istr(line);

    std::string buffer;
    while (getline(istr, buffer, separator))
    {
        std::istringstream eltS(buffer);
        T t;
        eltS >> t;
        res.push_back(t);
    }
    
    return res;
}


#endif // _SPLIT_H_