// https://www.codewars.com/kata/57eae20f5500ad98e50002c5/train/cpp
#include <string>

std::string no_space(const std::string& x)
{
  std::string result;
  for (size_t i {}; i<x.length(); i++) {
    if (x[i] == ' ') continue;
    else result+=x[i];
  }
   return result;
}
//
// std::string no_space(std::string x)
// {
//     x.erase(std::remove(x.begin(), x.end(), ' '), x.end());
//     return x;
// }
