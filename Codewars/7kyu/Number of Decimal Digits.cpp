// https://www.codewars.com/kata/58fa273ca6d84c158e000052/train/cpp
#include <iostream>
#include <string>
#include <stdint.h>

int digits(uint64_t n) {
  int num_of_digits {};
  std::string num_str = std::to_string(n);
  for (size_t i {}; i<num_str.length(); i++) {
    if (isdigit(num_str[i])) num_of_digits++;
  }
  return num_of_digits;
}
