// https://www.codewars.com/kata/553e8b195b853c6db4000048/train/cpp
#include <iostream>
bool hasUniqueChars(std::string s) {
    if (s.length() == 0) return true;
    for (size_t i {}; i < s.length()-1; i++) {
        for (size_t j {i+1}; j < s.length(); j++) {
            if (s[i] == s[j]) return false;
        }
    }
    return true;
}
//
#include <set>

bool hasUniqueChars(std::string s) {
  return s.size() == std::set<char>(s.begin(), s.end()).size();
}
