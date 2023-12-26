// https://leetcode.com/problems/remove-element/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        for (size_t i=0; i<nums.size(); i++) {
            if (nums[i]==val) {
                nums.erase(nums.begin()+i);
                i--;
            } else {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, 2, 2, 3};
    cout << s.removeElement(nums, 3) << endl;

    return 0;
}
//
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};
