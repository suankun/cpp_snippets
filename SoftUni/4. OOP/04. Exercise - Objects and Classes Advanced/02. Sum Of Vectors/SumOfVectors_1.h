#ifndef SUMOFVECTORS_H 
#define SUMOFVECTORS_H 
 
#include <string>
#include <sstream>
#include <vector>

std::vector<std::string> operator+ (std::vector<std::string> & vec1, std::vector<std::string> & vec2) {
    std::vector<std::string> result;

    for (size_t idx = 0; idx < vec1.size(); idx++)
        result.push_back(vec1[idx] + " " + vec2[idx]);

    return result;
}

#endif // !SUMOFVECTORS_H