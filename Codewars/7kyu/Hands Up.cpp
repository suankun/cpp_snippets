// https://www.codewars.com/kata/56d8f14cba01a83cdb0002a2/train/cpp
#include <array>

using persons_t = std::array<int, 3>;

persons_t get_positions(int n) {
    int p1 = n % 3;
    int p2 = (n / 3) % 3;
    int p3 = (n / 9) % 3;
    return { p1, p2, p3 };
}
//
#include <array>

using persons_t = std::array<int, 3>;

persons_t get_positions(int n) {
    return {n % 3, (n % 9) / 3, (n % 27) / 9};
}
