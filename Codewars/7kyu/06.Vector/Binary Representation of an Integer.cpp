// https://www.codewars.com/kata/5a5f3034cadebf76db000023/train/cpp
#include <vector>

std::vector<int> showBits(int n) {
    std::vector<int> bits(32, 0);
    for (int i = 31; i >= 0; i--) {
        bits[i] = n & 1;
        n >>= 1;
    }
    return bits;
}
