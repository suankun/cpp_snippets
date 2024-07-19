// https://www.codewars.com/kata/561e1e2e6b2e78407d000011/train/cpp
#include <array>
#include <cmath>
#include <algorithm>
#include <vector>

bool isPerfectSquare(int x) {
    int s = static_cast<int>(std::sqrt(x));
    return s * s == x;
}

std::array<unsigned int, 2> closestPairToNum(const unsigned int upper_limit) {
    std::array<unsigned int, 2> largestPair = {0, 0};
    for (unsigned int m = 1; m < upper_limit; ++m) {
        for (unsigned int n = 1; n < m; ++n) {
            int sum = m + n;
            int diff = m - n;
            if (isPerfectSquare(sum) && isPerfectSquare(diff)) {
                if (m > largestPair[0] || (m == largestPair[0] && n > largestPair[1])) {
                    largestPair = {m, n};
                }
            }
        }
    }
    return largestPair;
}
