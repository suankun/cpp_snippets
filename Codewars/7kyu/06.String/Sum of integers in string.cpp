// https://www.codewars.com/kata/598f76a44f613e0e0b000026/train/cpp
#include <iostream>
#include <string>

using namespace std;

int sumOfIntegers(const std::string& str) {
    int sum = 0;
    int currentNumber = 0;

    for (char ch : str) {
        if (isdigit(ch)) {
            currentNumber = currentNumber * 10 + (ch - '0');
        } else {
            sum += currentNumber;
            currentNumber = 0;
        }
    }

    sum += currentNumber; // Add the last number if the string ends with a number

    return sum;
}

int main() {
    string one = "The Great Depression lasted from 1929 to 1939.";
    string two = "The30quick20brown10f0x1203jumps914ov3r1349the102l4zy";
    cout << sumOfIntegers(one) << endl;  // 3868
    cout << sumOfIntegers(two) << endl;  // 3635

    return 0;
}
