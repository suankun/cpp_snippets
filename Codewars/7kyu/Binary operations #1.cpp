// https://www.codewars.com/kata/560e80734267381a270000a2/train/cpp
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

std::string intToBinary(int num) {
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

int binaryToInt(const std::string& binary) {
    return std::stoull(binary, nullptr, 2);
}

int flip_bit(int value, size_t index) {
    std::string binary = intToBinary(value);
    // cout << binary << endl;

    std::reverse(binary.begin(), binary.end());

    if (binary.length() < index) {
        for (size_t i = 0; i < index; i++) {
            binary += '0';
        }
    }
    // cout << binary << endl;

    // Flip the bit at the specified index
    if (binary[index - 1] == '0') {
        binary[index - 1] = '1';
    } else {
        binary[index - 1] = '0';
    }

    // Special case for flipping the most significant bit
    if (binary.length() == index - 1) {
        binary += '0';
    }

    std::reverse(binary.begin(), binary.end());
    // cout << binary << endl;

    int result = binaryToInt(binary);
    // cout << result << endl;

    return result;
}

int main() {
    cout << flip_bit(0, 16) << endl;  //  32768
    cout << flip_bit(565, 6) << endl;  //  533
    cout << flip_bit(127, 8) << endl;  //  255
    cout << flip_bit(15, 4) << endl;  //  7
    cout << flip_bit(15, 5) << endl;  //  31

    return 0;
}
//
int flip_bit(int value, size_t index) {
  return value ^ (1 << (index-1));
}
