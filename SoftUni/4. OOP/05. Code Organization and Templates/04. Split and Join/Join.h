#ifndef _JOIN_H_
#define _JOIN_H_

#include <vector>
#include <string>
#include <sstream>

template<typename T>
std::string join(const std::vector<T> & v, const std::string & joinStr) {
    std::ostringstream ostr;

    bool bFirst = true;
    for (const T & curr : v) {
        if (!bFirst)
            ostr << joinStr;
        else
            bFirst = false;

        ostr << curr;
    }

    return ostr.str();
}


#endif // _JOIN_H_