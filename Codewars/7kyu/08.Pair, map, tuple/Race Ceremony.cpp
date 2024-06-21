// https://www.codewars.com/kata/62cecd4e5487c10028996e04/train/cpp
#include <iostream>
#include <cmath>
#include <tuple>

std::tuple<int, int, int> racePodium(int blocks) {
    double n = static_cast<int>(blocks / 3);
    double m = static_cast<double>(blocks) / 3;
    double diff = std::round((m - n) * 3);

    int a, b, c;
    if (diff > 1) {
        a = static_cast<int>(n) + 1;
        b = static_cast<int>(n) + static_cast<int>(diff);
        c = static_cast<int>(n) - 1;
    } else if (diff == 1) {
        a = static_cast<int>(n) + 1;
        b = static_cast<int>(n) + static_cast<int>(diff) + 1;
        c = static_cast<int>(n) - 2;
    } else {
        a = static_cast<int>(n);
        b = static_cast<int>(n) + 1;
        c = static_cast<int>(n) - 1;
    }

    if (c == 0) {
        a -= 1;
        c = 1;
    }

    return std::make_tuple(a, b, c);
}
//
#include <algorithm>
#include <tuple>
#include <cmath>

std::tuple<int, int, int> racePodium(int blocks) 
{
    const int first  = static_cast<int>(std::round((blocks + 1.0) / 3.0 + 1.0));
    const int second = std::min(first - 1, blocks - first - 1);
    const int third  = blocks - first - second;
    return std::make_tuple(second, first, third);
}
