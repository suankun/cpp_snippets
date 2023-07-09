// https://www.codewars.com/kata/57cc981a58da9e302a000214/train/cpp
#include <vector>

bool small_enough(std::vector<int> arr, int limit) {
  for (auto num: arr) if (num > limit) return false;
  return true;
}
//
#include <vector>

bool small_enough(std::vector<int> arr, int limit) {
  return std::find_if(arr.begin(),arr.end(),[&limit](const int& a) {return a > limit;}) == arr.end();
}
