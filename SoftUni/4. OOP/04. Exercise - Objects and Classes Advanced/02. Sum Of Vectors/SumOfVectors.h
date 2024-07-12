#ifndef SUMOFVECTORS_H 
#define SUMOFVECTORS_H

#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> operator + (const std::vector<std::string> & a, const std::vector<std::string> & b) {
    std::vector<std::string> res;

    res.reserve(a.size());

    for (size_t idx = 0; idx < a.size(); idx++)
        res.push_back(a[idx] + " " + b[idx]);

    // for (size_t idx = 0; idx < a.size(); idx++) {
    //     std::ostringstream ostr;

    //     ostr << a[idx] + ' ' + b[idx];

    //     res.push_back(ostr.str());
    // }

    return res;
}

#endif // !SUMOFVECTORS_H
