// https://www.codewars.com/kata/57a4d500e298a7952100035d/train/cpp
#include <iostream>
#include <string>
#include <cmath>

int hexToDec(std::string hexString)
{
    int result = 0;
    int sign = 1;

    // Check for negative sign
    if (hexString[0] == '-') {
        sign = -1;
        hexString = hexString.substr(1);
    }

    // Convert hexadecimal digits to decimal
    for (int i = hexString.length() - 1; i >= 0; --i) {
        int digitValue;
        if (hexString[i] >= '0' && hexString[i] <= '9') {
            digitValue = hexString[i] - '0';
        } else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
            digitValue = hexString[i] - 'A' + 10;
        } else if (hexString[i] >= 'a' && hexString[i] <= 'f') {
            digitValue = hexString[i] - 'a' + 10;
        } else {
            // Invalid character
            return 0; // Or you can handle this case differently
        }

        result += digitValue * pow(16, hexString.length() - 1 - i);
    }

    return result * sign;
}
//
#include <string>

int hexToDec(const std::string& hexString)
{
    return std::stoi(hexString, nullptr, 16);
}
