// https://www.codewars.com/kata/51c89385ee245d7ddf000001/train/cpp
#include <string>

std::string solution(int n) {
  std::string result = "Value is ";
  if (n>=0 && n<10) {
    std::string pad = "0000";
    result += pad + std::to_string(n);
  } else if (n>=10 && n<100) {
    std::string pad = "000";
    result += pad + std::to_string(n);
  } else if (n>=100 && n<1000) {
    std::string pad = "00";
    result += pad + std::to_string(n);
  } else if (n>=1000 && n<10000) {
    std::string pad = "0";
    result += pad + std::to_string(n);
  } else if (n>=10000) {
    result += std::to_string(n);
  }
  return result;
}
////////////
std::string solution(const int n)
{
  std::string str = "00000";
  str += std::to_string(n);
  
  return "Value is " + str.substr(str.length() - 5, 5);
}
