// https://www.codewars.com/kata/51c8991dee245d7ddf00000e/train/cpp
#include <string>
#include <sstream>

std::string reverse_words(const std::string& str) {
    std::stringstream ss(str);
    std::string word = "";
    std::string reversed = "";
    while(std::getline(ss, word, ' ')) {
        reversed.insert(0, word + " ");
    }
    reversed.pop_back();
    return reversed;
}
//
#include <string>
#include <iostream>

std::string reverse_words(const std::string& str) {
  std::string s;
  std::stringstream ss(str);
  std::string w;
  while (ss >> w) s = w + " " + s;
  s.pop_back();
  return s;
}
