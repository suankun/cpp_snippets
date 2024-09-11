// https://www.codewars.com/kata/52b757663a95b11b3d00062d/train/cpp
#include <string>
#include <string_view>
#include <sstream>
#include <cctype>
#include <iostream>

std::string to_weird_case(std::string_view str) {
    std::stringstream result;
    
    bool to_upper = true;

    for (char ch : str) {
        if (std::isspace(ch)) {
            result << ch;
            to_upper = true;
        } else {
            if (to_upper) {
                result << static_cast<char>(std::toupper(ch));
            } else {
                result << static_cast<char>(std::tolower(ch));
            }
            to_upper = !to_upper;
        }
    }

    return result.str();
}

int main() {
    std::string text = "This is a test";
    std::string weird_case = to_weird_case(text);
    std::cout << weird_case << std::endl;

    return 0;
}
//
#include <algorithm>
#include <cctype>
#include <string>
#include <string_view>

std::string to_weird_case(const std::string_view str) {
    std::string res{str};
    std::transform(res.cbegin(), res.cend(), res.begin(),
                   [isupper = false](const char c) mutable {
                       if (c == ' ') isupper = true;
                       return (isupper = !isupper) ? std::toupper(c)
                                                   : std::tolower(c);
                   });
    return res;
}
