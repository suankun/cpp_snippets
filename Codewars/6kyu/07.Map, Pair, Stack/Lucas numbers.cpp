// https://www.codewars.com/kata/55a7de09273f6652b200002e/train/cpp

// Lucas numbers are numbers in a sequence defined like this:

// L(0) = 2
// L(1) = 1
// L(n) = L(n-1) + L(n-2)
// Your mission is to complete the function that returns the nth term of this sequence.

// Note: It should work for negative numbers as well; how you do this is you flip the equation around, so for negative numbers: L(n) = L(n+2) - L(n+1)

// Examples
// L(-10) = 123
// L(-5)  = -11
// L(-1)  =  -1
// L(0)   =   2
// L(1)   =   1
// L(5)   =  11
// L(10)  = 123

#include <unordered_map>

long long int lucasnum_helper(int n, std::unordered_map<int, long long int>& memo) {
    if (memo.find(n) != memo.end()) return memo[n];
    if (n < 0) return memo[n] = -lucasnum_helper(n + 1, memo) + lucasnum_helper(n + 2, memo);
    if (n == 0) return 2;
    if (n == 1) return 1;
    return memo[n] = lucasnum_helper(n - 1, memo) + lucasnum_helper(n - 2, memo);
}

long long int lucasnum(int n) {
    std::unordered_map<int, long long int> memo;
    return lucasnum_helper(n, memo);
}
