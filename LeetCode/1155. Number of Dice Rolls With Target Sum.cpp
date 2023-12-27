// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum
// 1. We initialize dp1 to represent the base case, where there is one way to achieve
// a sum of 0 with 0 dice rolls.
// 2. We iterate through each die, updating dp2 based on the previous row (dp1).
// We maintain a running sum (prev) to efficiently calculate the number of ways to achieve the current sum.
// 3. After updating dp2, we swap the arrays (dp1 and dp2) to prepare for the next iteration.
// We also reset the first element of the new dp2 array to zero.
// 4. After completing all iterations, the result is stored in dp1[target],
// representing the number of ways to achieve the target sum with the given number of dice rolls.

#include <iostream>
#include <vector>
class Solution {
public:
    int numRollsToTarget(int d, int f, int target) {
        const int mod = 1000000007;

        // Initialize two vectors to store the current and previous rows of dynamic programming table
        std::vector<int> dp1(target + 1, 0);  // Current row
        std::vector<int> dp2(target + 1, 0);  // Previous row

        // Base case: there is one way to achieve a sum of 0 with 0 dice rolls
        dp1[0] = 1;

        // Dynamic programming loop for each die
        for (int i = 1; i <= d; ++i) {
            int prev = dp1[0];  // Initialize the previous value for the first element
            for (int j = 1; j <= target; ++j) {
                dp2[j] = prev;  // Update dp2 based on the previous value
                prev = (prev + dp1[j]) % mod;  // Update prev for the next iteration

                // If the current sum has more faces than the number of faces on the die, adjust prev
                if (j >= f) prev = (prev - dp1[j - f] + mod) % mod;
            }

            // Swap dp1 and dp2 for the next iteration
            std::swap(dp1, dp2);

            // Reset the first element of dp2 for the next iteration
            dp2[0] = 0;
        }

        // The result is in dp1[target], representing the number of ways to achieve the target sum
        return dp1[target];
    }
};
