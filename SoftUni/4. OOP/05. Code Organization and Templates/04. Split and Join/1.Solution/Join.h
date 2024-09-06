#ifndef _JOIN_H_
#define _JOIN_H_

#include <vector>
#include <string>
#include <sstream>

template<typename T>
std::string join(std::vector<T> & numbers, std::string & joinStr) {
    std::ostringstream ostr;

    typename std::vector<T>::iterator it = numbers.begin();
    bool bFirst = true;
    while (it != numbers.end()) {
        
        if (bFirst)
            bFirst = false;
        else
            ostr << joinStr;

        ostr << *it++;
    }

    return ostr.str();
}

#endif  // _JOIN_H_