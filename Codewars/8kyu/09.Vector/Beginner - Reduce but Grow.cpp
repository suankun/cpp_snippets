// https://www.codewars.com/kata/57f780909f7e8e3183000078/train/cpp
#include <vector>
int grow(std::vector<int> nums) {
  int sum {1};
  for (auto num: nums) sum *= num;
  return sum;
}
//
#include <vector>
#include <numeric>
#include <functional>

int grow(const std::vector<int>& nums) {
  return std::accumulate(nums.cbegin(), nums.cend(), 1, std::multiplies<int>());
}
