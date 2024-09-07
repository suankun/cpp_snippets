// https://www.codewars.com/kata/5d98b6b38b0f6c001a461198/train/cpp
#include <string>
#include <bitset>
#include <iostream>

namespace coding {

    std::string getBinary(int n, int k) {
        std::string binary = std::bitset<4>(n).to_string();
        return binary.substr(4 - k);
    }

    std::string encodeDigit(int digit) {
        if (digit == 0) return "10"; // Special case for 0
        
        int k = 0;
        int tmp = digit;
        
        while (tmp > 0) {
            tmp >>= 1;
            k++;
        }
        
        std::string encoded = std::string(k - 1, '0') + '1';
        encoded += getBinary(digit, k);
        return encoded;
    }

    std::string code(const std::string &strng) {
        std::string result;
        for (char c : strng) {
            result += encodeDigit(c - '0');
        }
        return result;
    }

    std::string decode(const std::string &str) {
        std::string result;
        int i = 0;
        
        while (i < str.size()) {
            int zeros = 0;
            
            while (str[i] == '0') {
                zeros++;
                i++;
            }
            
            i++;
            
            int length = zeros + 1;
            int value = 0;
            
            for (int j = 0; j < length; j++) {
                value = (value << 1) | (str[i] - '0');
                i++;
            }
            
            result += std::to_string(value);
        }
        
        return result;
    }
}
