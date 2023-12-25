// https://leetcode.com/problems/decode-ways/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numDecodings(std::string s) {
        if (s.empty() || s[0] == '0') {
            return 0;
        }

        int n = s.length();
        std::vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; ++i) {
            int oneDigit = s[i - 1] - '0';
            int twoDigits = std::stoi(s.substr(i - 2, 2));

            if (oneDigit != 0) {
                dp[i] += dp[i - 1];
            }

            if (10 <= twoDigits && twoDigits <= 26) {
                dp[i] += dp[i - 2];
            }
        }

        return dp[n];
    }
};

int main() {
    Solution s;
    cout << s.numDecodings("12")        << endl;  // 2
    cout << s.numDecodings("226")       << endl;  // 3

    cout << s.numDecodings("06")        << endl;  // 0
    cout << s.numDecodings("11106")     << endl;  // 3
    cout << s.numDecodings("0")         << endl;  // 0
    cout << s.numDecodings("10")        << endl;  // 1

    cout << s.numDecodings("2101")      << endl;  // 1
    cout << s.numDecodings("1123")      << endl;  // 5

    cout << s.numDecodings("27")        << endl;  // 1
    cout << s.numDecodings("1201234")   << endl;  // 3

    cout << s.numDecodings("123123")   << endl;  // 9


    return 0;
}
