// https://www.codewars.com/kata/53dc54212259ed3d4f00071c/train/cpp
#include <vector>

int sum(std::vector<int> nums) {
    double sum {};
    for (auto num: nums) sum += num;
    return sum;
}
//
#include <vector>
#include <numeric>

int sum(std::vector<int> nums) {
    return std::accumulate(nums.begin(), nums.end(), 0);
}
