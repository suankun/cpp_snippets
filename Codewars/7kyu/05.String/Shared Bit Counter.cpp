// https://www.codewars.com/kata/58a5aeb893b79949eb0000f1/train/cpp
#include <iostream>
#include <bitset>
#include <algorithm>

bool shared_bits(long a, long b) {
    std::string binary_a = std::bitset<64>(a).to_string();
    std::string binary_b = std::bitset<64>(b).to_string();

    binary_a.erase(0, binary_a.find_first_not_of('0'));
    binary_b.erase(0, binary_b.find_first_not_of('0'));

    if (binary_a.length() < binary_b.length()) {
        binary_a.insert(0, binary_b.length() - binary_a.length(), '0');
    } else if (binary_a.length() > binary_b.length()) {
        binary_b.insert(0, binary_a.length() - binary_b.length(), '0');
    }

    int count = 0;
    for (size_t i = 0; i < binary_a.length(); ++i) {
        if (binary_a[i] == binary_b[i] && binary_a[i] == '1') {
            count++;
        }
        if (count >= 2) {
            return true;
        }
    }
    return false;
}
//
#include <bitset>
bool shared_bits(long a, long b){
    std::bitset<32> c;
    c = a & b;
    return c.count()>=2 ;
}
//
bool shared_bits(long a, long b){
    long n = a & b;
    return n &= n-1;
}
