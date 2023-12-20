// https://leetcode.com/problems/buy-two-chocolates/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min=INT_MAX, nextMin=INT_MAX;
        for (size_t i=0; i<prices.size(); i++) {
            if (prices[i]<min) {
                nextMin=min;
                min=prices[i];
            } else if (prices[i]<nextMin) {
                nextMin=prices[i];
            }
        }
        return (min+nextMin)<=money ? money-(min+nextMin) : money;
    }
};

int main() {
    Solution s1;
    // vector<int> prices1 = {1,2,2};
    // vector<int> prices2 = {3,2,3};
    vector<int> prices3 = {98,54,6,34,66,63,52,39};
    // cout << s1.buyChoco(prices1, 3) << endl;  // 0
    // cout << s1.buyChoco(prices2, 3) << endl;  // 3
    cout << s1.buyChoco(prices3, 62) << endl;  // 3

    return 0;
}
