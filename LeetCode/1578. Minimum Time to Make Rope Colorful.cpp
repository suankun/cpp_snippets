// https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int timeCost=0;
        for (size_t i=0; i<colors.length()-1; i++) {
            if (colors[i]==colors[i+1]) {
                if (neededTime[i]<neededTime[i+1]) {
                    timeCost+=neededTime[i];
                }
                else {
                    timeCost+=neededTime[i+1];
                    neededTime[i+1]=neededTime[i];
                }
            }
        }
        return timeCost;
    }
};

int main() {
    Solution s;

    string colors1 = "abaac";
    vector<int> neededTime1 = {1, 2, 3, 4, 5};
    cout << s.minCost(colors1, neededTime1) << endl;  // 3

    string colors2 = "abc";
    vector<int> neededTime2 = {1, 2, 3};
    cout << s.minCost(colors2, neededTime2) << endl;  // 0

    string colors3 = "aabaa";
    vector<int> neededTime3 = {1, 2, 3, 4, 1};
    cout << s.minCost(colors3, neededTime3) << endl;  // 2

    string colors4 = "aaabbbabbbb";
    vector<int> neededTime4 = {3,5,10, 7,5,3, 5, 5,4,8,1};
    cout << s.minCost(colors4, neededTime4) << endl;  // 26

    return 0;
}
