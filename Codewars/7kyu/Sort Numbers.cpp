// https://www.codewars.com/kata/5174a4c0f2769dd8b1000003/train/cpp
#include <iostream>
using namespace std;

#include <vector>
#include <bits/stdc++.h>

std::vector<int> solution(std::vector<int> nums) {
    sort(nums.begin(), nums.end());
    return nums;
}

int main() {
    vector<int> nums {3, 5, 1, 2, 4};
    vector<int> res = solution(nums);
    for (auto num: res) cout << num << " ";
    cout << endl;

    return 0;
}
//////////////
#include <vector>
#include <algorithm>
using namespace std;

std::vector<int> solution(std::vector<int> nums) {
    sort(nums.begin(), nums.end());
    return nums;
}