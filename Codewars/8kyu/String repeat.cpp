// https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/train/cpp
#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string result;
  for (size_t i {}; i<repeat; i++) {
    result+=str;
  }
  return result;
}