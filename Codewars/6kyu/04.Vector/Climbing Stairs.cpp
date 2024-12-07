// https://www.codewars.com/kata/64b7c03910f916000f493f5d/train/cpp

// Task
// A staircase is given with a non-negative cost per each step. Once you pay the cost, you can either climb one or two steps. Create a solution to find the minimum sum of costs to reach the top. You can start at either of the first two steps.

// Examples
// Stairs: [0, 2, 2, 1]
// Step 0: Start on first step
// Step 1: Pay 0 and climb two steps to reach the third step
// Step 2: Pay 2 and climb two steps to reach the top
// Total spent: 2

// Stairs: [0, 2, 3, 2]
// Step 0: Start on first step
// Step 1: Pay 0 and climb two steps to reach the third step
// Step 2: Pay 3 and climb two steps to reach the top
// Total spent: 3

// Stairs: [10, 15, 20]
// Step 0: Start on the second step
// Step 1: Pay 15 and climb two steps to reach the top
// Total spent: 15

// Stairs [0, 0, 0, 0, 0, 0]
// Take any path, because every step is free!

// Stairs [0, 1, 2, 0, 1, 2]
// Step 0: Start on the second step
// Step 1: Pay 1 and climb two steps to reach the fourth step
// Step 2: Pay 0 and climb one step to reach the fifth step
// Step 3: Pay 1 and climb two steps to reach the top
// Total spent: 2
// Notes
// 2 <= number of steps <= 1000

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int climbing_stairs(const vector<int>& cost) {
    int n = cost.size();
    vector<int> dp(n + 1, 0);

    dp[0] = 0;

    for (int i = 2; i <= n; i++) {
        dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
    }

    return dp[n];
}

int main() {
    cout << climbing_stairs( {10, 15, 20} ) << endl;                          // 15
    cout << climbing_stairs( {1, 100, 1, 1, 1, 100, 1, 1, 100, 1} ) << endl;  //  6
    cout << climbing_stairs( {0, 2, 2, 1} ) << endl;                          //  2
    cout << climbing_stairs( {0, 2, 3, 2} ) << endl;                          //  3
    cout << climbing_stairs( {0, 0, 0, 0, 0, 0} ) << endl;                    //  0

    return 0;
}
//
#include <algorithm>
#include <tuple>
#include <vector>

int climbing_stairs(const std::vector<int>& cost) {
    using namespace std;
    int a = 0, b = 0;
    for (int c : cost)
        tie(a, b) = tuple(b, min(a, b) + c);
        
    return min(a, b);
}