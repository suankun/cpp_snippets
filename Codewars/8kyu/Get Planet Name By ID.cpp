// https://www.codewars.com/kata/515e188a311df01cba000003/train/cpp
#include <string>

std::string get_planet_name(int id)
{
  std::string res = "";
  if (id == 1) res = "Mercury";
  else if (id == 2) res = "Venus";
  else if (id == 3) res = "Earth";
  else if (id == 4) res = "Mars";
  else if (id == 5) res = "Jupiter";
  else if (id == 6) res = "Saturn";
  else if (id == 7) res = "Uranus";
  else if (id == 8) res = "Neptune";
  return res;
}
//
std::string get_planet_name(int id)
{
  std::string array[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
  return array[id-1];
}
