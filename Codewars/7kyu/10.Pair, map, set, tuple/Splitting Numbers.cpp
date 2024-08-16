// https://www.codewars.com/kata/5b7d72b77a2013975700015c/train/cpp
#include <utility>

std::pair<int, int> splitNumbers(int n) {
    int a = 0, b = 0;
    bool toggle = true;
    int bitPosition = 0;

    while (n > 0) {
        if (n & 1) {
            if (toggle) {
                a |= (1 << bitPosition);
            } else {
                b |= (1 << bitPosition);
            }
            toggle = !toggle;
        }
        n >>= 1; // Move to the next bit
        bitPosition++;
    }

    return std::make_pair(a, b);
}
//
std::pair<int, int> splitNumbers( int n ) {
    int a{}, b{}, i{};
    while ( i < 31 ) ( a > b ? b : a ) |= n & 1 << i++;
    return { a, b };
}
