// https://www.codewars.com/kata/56541980fa08ab47a0000040/train/cpp
#include <iostream>
#include <string>

class Printer
{
public:
    static std::string printerError(const std::string &s){
        int num {};
        for (size_t i {}; i<s.length(); i++) {
            if (s[i]>='a' && s[i]<='m') continue;
            else num++;
        }
        int denom = s.length();
        std::string result = std::to_string(num) + '/' + std::to_string(denom);
        return result;
    };
};
//
// class Printer
// {
// public:
//     static std::string printerError(const std::string &s)
//     {
//       return std::to_string(count_if(s.begin(), s.end(), [](char c){ return c>'m';})) + "/" + std::to_string(s.size());
//     }
// };
