// https://www.codewars.com/kata/55b051fac50a3292a9000025/train/cpp
#include <string>

long long filter_string(const std::string &value)
{
  
  long long result {};
  long long mult {1};
  for (size_t i {value.length()}; i>0; i--) {
    if (isdigit(value[i])) {
      result += (value[i] - '0') * mult;
      mult *= 10;
    }
  }
  if (isdigit(value[0])) result += (value[0] - '0') * mult;
    return result;
}
//
#include <string>
#include <regex>
long long filter_string(const std::string &value)
{
  std::regex r("[^0-9]+");
  
  std::string ans = std::regex_replace(value,r,"");
  
  return std::stoll(ans); // complete this function :)
}
