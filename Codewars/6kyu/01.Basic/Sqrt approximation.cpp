// https://www.codewars.com/kata/52ecde1244751a799b00018a/train/cpp

// We want to approximate the sqrt function. Usually this function takes a floating point number and returns another floating point number, but in this kata we're going to work with integral numbers instead.

// Your task is to write a function that takes an integer n and returns either

// an integer k if n is a square number, such that k * k == n or
// a range (k, k+1), such that k * k < n and n < (k+1) * (k+1).
// Examples
// Assert::That(sqrtApproximation(4), Equals(std::vector<int>{2}));
// Assert::That(sqrtApproximation(5), Equals(std::vector<int>{2,3}));
// Note : pow and sqrt functions are disabled.

// Remarks
// In dynamic languages, return either a single value or an array/list. In Haskell, use Either.

#include <vector>

std::vector<int> sqrtApproximation(double number) {
    for (int i = 0; i <= number; i++) {
        if (i * i == number) 
            return {i};
        if (i * i > number) 
            return {i - 1, i};
    }
    return {0};
}
