// https://leetcode.com/problems/add-binary/description/

// Given two binary strings a and b, return their sum as a binary string.

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"
 

// Constraints:

// 1 <= a.length, b.length <= 104
// a and b consist only of '0' or '1' characters.
// Each string does not contain leading zeros except for the zero itself.

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int carry = 0;

        int i = a.size() - 1, j = b.size() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            res += (sum % 2) + '0';
            carry = sum / 2;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution s;
    string a, b;

    a = "11", b = "1";
    cout << s.addBinary(a, b) << endl; // "100"

    a = "1010", b = "1011";
    cout << s.addBinary(a, b) << endl; // "10101"


    return 0;
}
