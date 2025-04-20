// https://www.codewars.com/kata/529e2e1f16cb0fcccb000a6b/train/cpp

// We need the ability to divide an unknown integer into a given number of even parts - or at least as even as they can be. The sum of the parts should be the original value, but each part should be an integer, and they should be as close as possible.

// Complete the function so that it returns an array of integers representing the parts. If the input number is too small to split it into requested amount of parts, the additional parts should have value 0. Ignoring the order of the parts, there is only one valid solution for each input to your function!

// Example:
// 20 split into 6 parts should return [3, 3, 3, 3, 4, 4], in any order.

// Inputs
// 0⩽num⩽1000000000
// 1⩽parts⩽1000

#include <vector>

std::vector<int> splitInteger(int num, int parts) {
    std::vector<int> result(parts, num / parts);
    int remainder = num % parts;

    for (int i = 0; i < remainder; i++)
        result[i]++;

    return result;
}
