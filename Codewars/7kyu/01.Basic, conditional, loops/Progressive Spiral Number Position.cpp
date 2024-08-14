// https://www.codewars.com/kata/5a254114e1ce0ecf6a000168/train/cpp
#include <cmath>

int layers(int n)
{
    int layer = 1;
    int a = 1;
    while (std::pow(a, 2) < n) {
        layer += 1;
        a += 2;
    }
    return layer;
}
//
#include <cmath>

int layers(int n) {
    return std::ceil((std::sqrt(n) + 1) / 2);
}
