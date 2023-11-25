// https://www.codewars.com/kata/58acfe4ae0201e1708000075/train/cpp
#include <vector>

bool invite_more_women(const std::vector<int> &invited) {
  int men=0, women=0;
  for (auto n: invited) {
    if (n==1) men++;
    else women++;
  }
  return men!=women ? (women>men ? false : true) : false;
}
//
#include <vector>
#include <numeric>

bool invite_more_women(const std::vector<int>& invited) {
  return std::accumulate(invited.begin(), invited.end(), 0) > 0;
}
