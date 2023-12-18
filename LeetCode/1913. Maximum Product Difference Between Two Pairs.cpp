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
//
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest = 0, secondLargest = 0;
        int smallest = INT_MAX, secondSmallest = INT_MAX;

        for (int n : nums) {
            if (n < smallest) {
                secondSmallest = smallest;
                smallest = n;
            } else if (n < secondSmallest) {
                secondSmallest = n;
            }

            if (n > largest) {
                secondLargest = largest;
                largest = n;
            } else if (n > secondLargest) {
                secondLargest = n;
            }
        }

        return (largest * secondLargest) - (smallest * secondSmallest);
    }
};
