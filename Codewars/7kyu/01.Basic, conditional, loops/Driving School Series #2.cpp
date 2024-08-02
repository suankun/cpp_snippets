// https://www.codewars.com/kata/589b1c15081bcbfe6700017a/train/cpp
unsigned cost(unsigned n) {
    int res = 0;
    if (n <= 65)
        return 30;
    else
        res = (((n / 30) + 1) * 10) + 10;
    return  n % 30 <= 5 ? res - 10 : res;
}
//
#include <cmath>

unsigned cost(unsigned n) 
{
    return n < 65 ? 30 : 30 + ceil((n - 65) / 30.0) * 10;
}
