#ifndef MIN_BY_H 
#define MIN_BY_H 

#include <string>
#include <vector>
 
std::string minBy(const std::vector<std::string> & values, bool (*compareFunc)(const std::string& a, const std::string& b)) {
    std::string lessByResult = values[0];

    for (const std::string & curr : values) {
        if (compareFunc(curr, lessByResult))
            lessByResult = curr;
    }



    return lessByResult;
}



#endif // !MIN_BY_H