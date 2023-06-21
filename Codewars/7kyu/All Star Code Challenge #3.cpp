// https://www.codewars.com/kata/58640340b3a675d9a70000b9/train/cpp
#include <string>

std::string remove_vowels(const std::string& str) {
  std::string result;
  for (auto ch: str) {
    if (ch == 'a' || ch == 'o' || ch == 'u' || ch == 'e' || ch == 'i') continue;
    else result+=ch;
  }
  return result;
}
//////////
#include <string>
#include <regex>

std::string remove_vowels(const std::string& str) {
  return std::regex_replace(str, std::regex("[aeiou]"), "");
}
