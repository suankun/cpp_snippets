// https://www.codewars.com/kata/5c5086287bc6600001c7589a/train/cpp
#include <iostream>
#include <cmath>

bool isNegativeZero(float n) {
    std::cout << n << std::endl;
    return n == 0 && std::signbit(n) ? true : false;
}
//
bool isNegativeZero(float n) {
    return (1 / n < 0) * !n;
}
