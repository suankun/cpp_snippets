#ifndef _SOLUTION_H_
#define _SOLUTION_H_

#include "storage.h"

#include <string>
#include <sstream>

bool Storage::operator <= (Store & contents) {
    for (const auto & pair : contents) {
        auto it = storage.find(pair.first);
        if (it == storage.end() || it->second < pair.second)
            return false;
    }
    return true;
}

Storage & Storage::operator >> (Store & contents) {
    for (const auto & pair : contents) {
        auto it = storage.find(pair.first);
        if (it != storage.end()) {
            if (it->second <= pair.second)
                storage.erase(it);
            else
                it->second -= pair.second;
        }
    }
    return *this;
}

std::ostream & operator << (std::ostream & out, Storage & s) {
    out << "Storage: ";
    if (s.begin() == s.end()) {
        out << "Empty";
    } else {
        bool bFirst = true;

        for (auto it = s.begin(); it != s.end(); ++it) {
            if (bFirst)
                bFirst = false;
            else
                out << ", ";

            out << it->first << ": " << it->second;
        }
    }
    return out;
}


#endif  // _SOLUTION_H_