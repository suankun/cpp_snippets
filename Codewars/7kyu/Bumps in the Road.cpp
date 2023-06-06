// https://www.codewars.com/kata/57ed30dde7728215300005fa/train/cpp
#include <string>

std::string bumps(std::string road){
  int bumps_count {};
  for (size_t i {}; i<road.length(); i++) {
    if (road[i]=='n') bumps_count++;
  }
  
  return bumps_count>15 ? "Car Dead" : "Woohoo!";
}
//////////
#include <algorithm>
std::string bumps(std::string road){

	return std::count(road.begin(), road.end(), 'n') >15 ? "Car Dead" : "Woohoo!";
	
}