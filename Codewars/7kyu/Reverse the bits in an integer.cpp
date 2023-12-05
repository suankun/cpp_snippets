// https://www.codewars.com/kata/5959ec605595565f5c00002b/train/cpp
#include <iostream>
using namespace std;

#include <algorithm>

std::string intToBinary(unsigned int num) {
    std::string binary = "";
    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }

    if (binary.empty()) {
        binary = "0";
    }

    return binary;
}

unsigned int binaryToInt(const std::string& binary) {
    return std::stoull(binary, nullptr, 2);
}

unsigned int reverse_bits(unsigned int n) {
    std::string binary = intToBinary(n);

    std::reverse(binary.begin(), binary.end());

    int result = binaryToInt(binary);

    return result;
}

int main() {
    cout << reverse_bits(417)  << endl;  //  267
    cout << reverse_bits(267)  << endl;  //  417
    cout << reverse_bits(0)    << endl;  //  0
    cout << reverse_bits(2017) << endl;  //  1087
    cout << reverse_bits(1023) << endl;  //  1023
    cout << reverse_bits(1024) << endl;  //  1

    return 0;
}
