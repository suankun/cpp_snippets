// https://www.codewars.com/kata/66dc904c177237f5b3e9eb5f/train/cpp

// Background:

// The Gray Code is a representation of binary integers in which successive integers differ in only 1 bit. The bit switched at each step is the one that yields the smallest value not yet represented. See Gray Code.

// The "Even Gray Code" requires successive binary integers to differ in an even number of bits. The bits changed at each step should yield the smallest value not yet represented in the standard binary encoding.

// Example - The 4-bit Even Gray Code: 
// 0000   Start at 0
// 0011   Switch bits 1,2
// 0101   Switch bits 2,3
// 0110   Switch bits 1,2
// 1001   Switch all 4 bits
// 1010   Switch bits 1,2
// 1100   Switch bits 2,3
// 1111   Switch bits 1,2

// Inputs:
// The size of the Even Gray Code, a integer between 2 and 20.
// The position where we want the Even Gray Code value, a non-negative integer guaranteed to be smaller than the number of elements in the Even Gray Code of length size.

// Output:
// A string representing the value at position position of the Even Gray Code of length size.

// Example:
// even_gray_code(4,5) should return '1010', because, as shown above, 1010 is the value of the Even Gray Code of length 4 at position 5. (The first position is position 0.)
// Source: International Collegiate Programming Contest, North Central North American Regional, 2023.

#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>

using namespace std;

std::string even_gray_code(int size, int position) {
    std::string binary = std::bitset<32>(position).to_string();
    binary = binary.substr(binary.size() - size);
    
    int parity = __builtin_popcount(position) % 2;
    
    std::string even_gray = binary + std::to_string(parity);
    
    even_gray = even_gray.substr(even_gray.size() - size);
    
    return even_gray;
}

int main() {
    // cout << even_gray_code(2, 0) << endl;     // "00"
    cout << even_gray_code(2, 1) << endl;     // "11"
    // cout << even_gray_code(3, 0) << endl;     // "000"
    // cout << even_gray_code(3, 1) << endl;     // "011"
    // cout << even_gray_code(3, 2) << endl;     // "101"
    // cout << even_gray_code(3, 3) << endl;     // "110"
    // cout << even_gray_code(4, 5) << endl;     // "1010"
    // cout << even_gray_code(5, 8) << endl;     // "10001"
    // cout << even_gray_code(10, 230) << endl;  // "0111001101"
    // cout << even_gray_code(20, 17) << endl;   // "00000000000000100010"

    return 0;
}
//
std::string even_gray_code(int size, int position) {
    const auto bs=std::bitset<32>(position);
    return bs.to_string().substr(32 - size + 1) + "01"[bs.count() % 2];
}
