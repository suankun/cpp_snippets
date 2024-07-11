// https://www.codewars.com/kata/56d9292cc11bcc3629000533/train/cpp
#include <iostream>
#include <string>

std::string testit(std::string s)
{
    if (s.empty()) {
        return "";
    } else if (s.size() == 1) {
        return s;
    } else {
        std::string result = "";
        for (size_t i = 0; i < s.size() - 1; i += 2) {
            int average = (static_cast<int>(s[i]) + static_cast<int>(s[i + 1])) / 2;
            result += static_cast<char>(average);
        }
        if (s.length() % 2 != 0) result += s[s.length() - 1];
        return result;
    }
}
//
std::string testit(std::string s)
{
    std::string r;
    
    for(int i = 0; i < s.size(); i += 2)
        r += (s[i] + (i + 1 < s.size() ? s[i+1] : s[i])) / 2;
    
    return r;
}
