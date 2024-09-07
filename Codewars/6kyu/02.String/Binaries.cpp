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
//
#include <unordered_map>
namespace coding {
    const std::unordered_map<char, std::string> codes = {
        {'0', "10"}, {'1', "11"}, {'2', "0110"}, {'3', "0111"}, {'4', "001100"}, {'5', "001101"}, {'6', "001110"}, {'7', "001111"}, {'8', "00011000"}, {'9', "00011001"}
    };
    std::string code(const std::string &strng) {
        std::string result;
        for (char c : strng) result += codes.at(c);
        return result;
    }
    std::string decode(const std::string &str) {
        std::string result, temp;
        for (char c : str) {
            temp += c;
            for (const auto& [k, v] : codes)
                if (v == temp) { result += k; temp.clear(); break; }
        }
        return result;
    }
}
