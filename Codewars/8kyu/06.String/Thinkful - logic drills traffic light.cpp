// https://www.codewars.com/kata/58649884a1659ed6cb000072/train/cpp
#include <string>

std::string update_light(std::string current) {
  std::string result;
  if (current == "green") result = "yellow";
  else if (current == "yellow") result = "red";
  else result = "green";
  return result;
}
//
#include <string>
#include <map>
std::string update_light(std::string current) {
  std::map<std::string, std::string> mp {{"green", "yellow"}, {"yellow", "red"}, {"red", "green"}};
  return mp[current];
}
