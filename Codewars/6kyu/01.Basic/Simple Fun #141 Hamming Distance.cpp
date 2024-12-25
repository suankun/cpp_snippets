// https://www.codewars.com/kata/58a6af7e8c08b1e9c40001c1/train/cpp

// The hamming distance between a pair of numbers is the number of binary bits that differ in their binary notation.

// Example
// For a = 25, b = 87, the result should be 4

// 25: 00011001
// 87: 01010111
// The hamming distance between these two would be 4 ( the 2nd, 5th, 6th, 7th bit ).

// Input/Output
// [input] integer a
// First Number. 1 <= a <= 2^20

// [input] integer b
// Second Number. 1 <= b <= 2^20

// [output] an integer
// Hamming Distance

#include <cstdint>

std::uint32_t hamming_distance(std::uint32_t a, std::uint32_t b) {
    std::uint32_t distance = 0;
    std::uint32_t xor_result = a ^ b;
    while (xor_result > 0) {
        distance += xor_result & 1;
        xor_result >>= 1;
    }
    return distance;
}
//
#include <cstdint>
#include <bitset>

std::uint32_t hamming_distance(std::uint32_t a, std::uint32_t b) {
    std::bitset<32> x(a ^ b);
    return static_cast<std::uint32_t>(x.count());
}
