// https://www.codewars.com/kata/5aa736a455f906981800360d/train/cpp
#include <string>

bool feast(std::string beast, std::string dish){
  return (beast[0] == dish[0] && beast[beast.length()-1] == dish[dish.length()-1]);
}
//
#include <string>

bool feast(std::string beast, std::string dish){
  return beast.front()==dish.front() && beast.back()==dish.back();
}
