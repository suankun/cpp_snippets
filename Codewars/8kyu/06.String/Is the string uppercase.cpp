// https://www.codewars.com/kata/56cd44e1aa4ac7879200010b/train/cpp
#include <string>

bool is_uppercase(const std::string &s) {
  for (size_t i {}; i<s.length(); i++) {
    if (islower(s[i])) return false;
    else continue;
  }
  return true;
}
//
#include <string>
#include <algorithm>

bool is_uppercase(const std::string &s) {
  return std::none_of(s.begin(), s.end(), islower);
}
