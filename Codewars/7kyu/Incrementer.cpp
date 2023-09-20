// https://www.codewars.com/kata/590e03aef55cab099a0002e8/train/cpp
#include <iostream>
#include <vector>

using namespace std;

std::vector<int> incrementer(std::vector<int> nums){
    std::vector<int> res;
    for (size_t i {}; i<nums.size(); i++) {
        int temp_num = nums[i] + (i+1);
        if (temp_num >= 10 && temp_num < 20) res.push_back(temp_num-10);
        else if (temp_num >= 20 && temp_num < 30) res.push_back(temp_num-20);
        else res.push_back(temp_num);
    }
    return res;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 8};
    std::vector<int> res = incrementer(nums);  // 2, 4, 6, 8, 0, 2, 4, 6, 8, 9, 0, 1, 2, 2
    for (auto n: res) cout << n << " ";
    cout << endl;

    return 0;
}
//
std::vector<int> incrementer(std::vector<int> nums) {
    for (int i = 0, len = nums.size(); i < len; ++i)
        nums[i] = (nums[i] + i + 1) % 10;
    return nums;
}
