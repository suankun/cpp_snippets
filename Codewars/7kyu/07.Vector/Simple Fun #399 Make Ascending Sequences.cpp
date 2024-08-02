// https://www.codewars.com/kata/5be0f1786279697939000157/train/cpp
#include <vector>

int make_sequence(int n) {
    std::vector<int> dp(n + 1, 0);
    dp[1] = 1;
    
    for (int i = 2; i <= n; ++i) {
        int sum = 1;  // Start with 1 to count the sequence [i]
        for (int j = 1; j <= i / 2; ++j) {
            sum += dp[j];
        }
        dp[i] = sum;
    }
    
    return dp[n];
}
