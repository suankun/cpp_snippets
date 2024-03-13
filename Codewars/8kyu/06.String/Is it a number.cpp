// https://www.codewars.com/kata/57126304cdbf63c6770012bd/train/cpp
#include <iostream>
#include <string>

using namespace std;

bool is_digit(std::string s) {
    std::cout << '"' << s << '"'  << std::endl;
    if (s.length() == 0) return false;
    char* p;
    strtod(s.c_str(), &p);
    if (*p != 0) {
        return false;
    }
    for (char c : s) {
        if (!isdigit(c) && c != '.' && c != '-') {
            return false;
        }
    }
    return true;
}
//
bool is_digit(std::string s) {
// Returns true if it is a valid single integer or floating number or false if it is not.
  
  for (unsigned i = 0; i < s.size(); i++) {
    char c = s[i];
    switch(c) {
      case '.' : case '0' ... '9' : continue;
      case '-' : if (i == 0) continue; }
    return false;
  }
  
  return s.size();
}
