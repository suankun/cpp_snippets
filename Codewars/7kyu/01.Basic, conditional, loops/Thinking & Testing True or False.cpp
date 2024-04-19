// https://www.codewars.com/kata/56d931ecc443d475d5000003/train/cpp
#include <iostream>
#include <string>
#include <bitset>

int testit(int n) {
    // Convert integer to binary string
    std::string binaryString = std::bitset<sizeof(int) * 8>(n).to_string();
    
    // Count the number of 1s in the binary string
    int count = 0;
    for (char c : binaryString) {
        if (c == '1') {
            count++;
        }
    }
    
    return count;
}
//
int testit(int n)
{
    std::bitset<32> bits(n);
    return bits.count();
}
