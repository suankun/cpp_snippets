// https://www.codewars.com/kata/5a1a9e5032b8b98477000004/train/cpp
#include <vector>

int even_last(std::vector<int> nums) {
  if (nums.size()==0) return 0;
  int sum {};
  for (size_t i {}; i<nums.size(); i++) {
    if (i%2==0) sum+= nums[i];
  }
  
  return sum*nums[nums.size()-1];
}
////////////////
#include <vector>

int even_last(const std::vector<int>& nums) {
    int sum = 0;
    for(auto it = nums.cbegin(); it < nums.cend(); it += 2) sum += *it;
    return nums.empty() ? 0 : nums.back() * sum;
}