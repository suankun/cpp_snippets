// https://www.codewars.com/kata/56b7f2f3f18876033f000307/train/cpp
#include <iostream>
#include <vector>
bool isAscOrder(std::vector<int> arr)
{
    for (size_t i=0; i<arr.size()-1; i++) if (arr[i]>arr[i+1]) return false;
    return true;
}
//
#include <algorithm>
#include <vector>

bool isAscOrder(const std::vector<int>& v) {
  return std::is_sorted(v.begin(), v.end());
}
