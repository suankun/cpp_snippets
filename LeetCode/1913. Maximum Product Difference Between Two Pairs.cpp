// https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return (nums[nums.size()-2]*nums[nums.size()-1])-(nums[0]*nums[1]);
    }
};

int main() {
    Solution s1;
    vector<int> nums = {5,6,2,7,4};
    cout << s1.maxProductDifference(nums) << endl;  // 34

    return 0;
}
