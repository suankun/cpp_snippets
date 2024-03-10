// https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7/train/cpp
#include <string>

std::string makeUpperCase (const std::string& input_str)
{
  std::string res;
  for (auto ch: input_str) res.push_back(toupper(ch));
  return res;
}
