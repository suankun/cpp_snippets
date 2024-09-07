#ifndef _SPLIT_H_
#define _SPLIT_H_

#include <vector>
#include <string>
#include <sstream>

template<typename T>
std::vector<T> split(const std::string & line, char separator) {
    std::vector<T> res;

    std::string curWord;
    std::istringstream istr(line);
    while (std::getline(istr, curWord, separator)) {
        std::istringstream istrC(curWord);
        T t;
        istrC >> t;
        res.push_back(t);
    }
    
    return res;
}


#endif  // _SPLIT_H_