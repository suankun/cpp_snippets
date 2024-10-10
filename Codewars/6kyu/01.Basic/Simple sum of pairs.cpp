// https://www.codewars.com/kata/5bc027fccd4ec86c840000b7/train/cpp

// Given an integer n, find two integers a and b such that:

// A) a >= 0 and b >= 0
// B) a + b = n
// C) DigitSum(a) + Digitsum(b) is maximum of all possibilities.  
// You will return the digitSum(a) + digitsum(b).

// For example:
// solve(29) = 11. If we take 15 + 14 = 29 and digitSum = 1 + 5 + 1 + 4 = 11. There is no larger outcome.
// n will not exceed 10e10.

#include <iostream>
#include <cmath>

using namespace std;

int digitSum(long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int solve(long n) {
    if (n < 10) {
        return n;
    }

    long a = std::pow(10, std::to_string(n).length() - 1) - 1;
    long b = n - a;

    return digitSum(a) + digitSum(b);
}

int main() {
    cout << solve(0) << endl;         //  0
    cout << solve(1) << endl;         //  1
    cout << solve(18) << endl;        // 18
    cout << solve(29) << endl;        // 11
    cout << solve(45) << endl;        // 18
    cout << solve(1140) << endl;      // 33
    cout << solve(7019) << endl;      // 35
    cout << solve(50000000) << endl;  // 68
    
    return 0;
}
//
int solve(long n){
    if (!n) return 0;
    int d1 = n > 9 ? 9 : n, d2 = (n - d1) % 10;
    return d1 + d2 + solve((n-d1-d2) / 10);
}
