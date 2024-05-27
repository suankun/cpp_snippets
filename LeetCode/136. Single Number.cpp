// https://leetcode.com/problems/single-number/description/
#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> s;
        for (int n : nums) {
            if (s.find(n) == s.end())
                s.insert(n);
            else
                s.erase(n);
        }
        int num;
        for (int n : s)
            num = n;
        return num;
    }
};
//
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single_num = 0;
        for(auto& num: nums) {
            single_num ^= num; 
        }
        return single_num;
    }
};
