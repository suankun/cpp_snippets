// https://www.codewars.com/kata/51b6249c4612257ac0000005/train/cpp

// Create a function that takes a Roman numeral as its argument and returns its value as a numeric decimal integer. You don't need to validate the form of the Roman numeral.

// Modern Roman numerals are written by expressing each decimal digit of the number to be encoded separately, starting with the leftmost digit and skipping any 0s. So 1990 is rendered "MCMXC" (1000 = M, 900 = CM, 90 = XC) and 2008 is rendered "MMVIII" (2000 = MM, 8 = VIII). The Roman numeral for 1666, "MDCLXVI", uses each letter in descending order.

// Example:
// "MM"      -> 2000
// "MDCLXVI" -> 1666
// "M"       -> 1000
// "CD"      ->  400
// "XC"      ->   90
// "XL"      ->   40
// "I"       ->    1
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
#include <vector>
#include <utility>

using namespace std;

const vector<pair<string, int>> ROMAN_MAP = {
    {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400}, {"C", 100},
    {"XC", 90}, {"L", 50}, {"XL", 40}, {"X", 10}, {"IX", 9},
    {"V", 5}, {"IV", 4}, {"I", 1}
};

int solution(string roman) {
    int result = 0;
    size_t index = 0;

    for (const auto& [rom, arab] : ROMAN_MAP) {
        while (roman.substr(index, rom.size()) == rom) {
            result += arab;
            index += rom.size();
        }
    }

    return result;
}

int main() {
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;

    int number = solution(roman);
    cout << "The corresponding integer is: " << number << endl;

    return 0;
}
