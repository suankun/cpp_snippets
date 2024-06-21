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
