// https://www.codewars.com/kata/56676e8fabd2d1ff3000000c/train/cpp
#include <vector>
#include <string>

std::string findNeedle(const std::vector<std::string>& haystack)
{
    int ind=0;
    for (size_t i=0; i<haystack.size(); i++) {
        if (haystack[i] == "needle") {
            ind=i;
            break;
        }
    }
    return "found the needle at position " + std::to_string(ind);
}
