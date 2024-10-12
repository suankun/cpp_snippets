// https://www.codewars.com/kata/51b62bf6a9c58071c600001b/train/cpp
// Create a function taking a positive integer between 1 and 3999 (both included) as its parameter and returning a string containing the Roman Numeral representation of that integer.

// Modern Roman numerals are written by expressing each digit separately starting with the leftmost digit and skipping any digit with a value of zero. There cannot be more than 3 identical symbols in a row.

// In Roman numerals:

// 1990 is rendered: 1000=M + 900=CM + 90=XC; resulting in MCMXC.
// 2008 is written as 2000=MM, 8=VIII; or MMVIII.
// 1666 uses each Roman symbol in descending order: MDCLXVI.
// Example:

//    1 -->       "I"
// 1000 -->       "M"
// 1666 --> "MDCLXVI"
// Help:

// Symbol    Value
// I          1
// V          5
// X          10
// L          50
// C          100
// D          500
// M          1,000

#include <iostream>
#include <string>
using namespace std;

std::string solution(int number) {
    std::string result = "";
    int decimals[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    //                  0    1    2    3    4    5   6   7   8  9  10 11 12
    std::string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    for (int i = 0; i < 13; i++) {
        while (number >= decimals[i]) {
            result += roman[i];
            number -= decimals[i];
        }
    }
    
    return result;
}

int main() {

    cout << solution(182) << endl; // "CLXXXII"
    cout << solution(1990) << endl; // "MCMXC"
    cout << solution(1875) << endl; // "MDCCCLXXV"
    

    return 0;
}