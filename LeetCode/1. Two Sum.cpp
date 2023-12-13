// https://leetcode.com/problems/two-sum/
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> res;
        for (int i {}; i<nums.size()-1; i++) {
            for (int j {i+1}; j<nums.size(); j++) {
                if (nums[i]+nums[j]==target) {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};