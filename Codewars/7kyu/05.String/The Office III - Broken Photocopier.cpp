// https://www.codewars.com/kata/57ed56657b45ef922300002b/train/cpp
#include <string>

std::string broken(const std::string& inp) {
    std::string result;
    for (size_t i {}; i<inp.length(); i++) {
        if (inp[i]=='0') result+='1';
        else result+='0';
    }
    return result;
}
//
#include <string>

std::string broken(const std::string& inp) {
    std::string s;
    for (const char& c: inp) s += c == '1' ? '0' : '1';
    return s;
}
