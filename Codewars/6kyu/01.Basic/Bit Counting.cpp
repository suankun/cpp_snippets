// https://www.codewars.com/kata/526571aae218b8ee490006f4/train/cpp
unsigned int countBits(unsigned long long n) {
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;  
    }
    return count;
}
//
#include <limits>
#include <bitset>
inline constexpr unsigned int countBits(const unsigned long long n) noexcept {
    std::bitset<std::numeric_limits<unsigned long long>::digits> b(n);
    return b.count();
}
