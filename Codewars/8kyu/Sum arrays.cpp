#include <vector>

int sum(std::vector<int> nums) {
  double sum {};
  for (auto num: nums) sum += num;
  return sum;
}
//////////////
#include <vector>
#include <numeric>

int sum(std::vector<int> nums) {
  return std::accumulate(nums.begin(), nums.end(), 0);
}