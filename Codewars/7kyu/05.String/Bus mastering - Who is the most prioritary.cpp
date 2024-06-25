// https://www.codewars.com/kata/5a0366f12b651dbfa300000c/train/cpp
#include <string>

std::string arbitrate(const std::string& input, int n){
  std::string res;
  
  bool isFound = false;
  for (size_t i = 0; i < n; i++) {
    if (input[i] == '1' && !isFound) {
      isFound = true;
      res += "1";
    }
    else {
      res += "0";
    }
  }
  
  return res;
}
