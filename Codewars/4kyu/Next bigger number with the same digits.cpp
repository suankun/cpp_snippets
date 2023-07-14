// https://www.codewars.com/kata/55983863da40caa2c900004e/train/cpp
#include <iostream>
#include <algorithm>
#include <vector>

long long nextBiggerNumber(long long n) {
    // Convert the number to a vector of digits
    std::vector<int> digits;
    long long temp = n;
    while (temp != 0) {
        digits.push_back(temp % 10);
        temp /= 10;
    }
    std::reverse(digits.begin(), digits.end());

    // Find the first index where the digit is smaller than the digit to its right
    int i = digits.size() - 2;
    while (i >= 0 && digits[i] >= digits[i + 1]) {
        i--;
    }

    // If no such index is found, the digits are in descending order, so return -1
    if (i < 0) {
        return -1;
    }

    // Find the smallest digit to the right of digits[i] that is larger than digits[i]
    int j = digits.size() - 1;
    while (digits[j] <= digits[i]) {
        j--;
    }

    // Swap the digits at indices i and j
    std::swap(digits[i], digits[j]);

    // Sort the digits to the right of index i in ascending order
    std::sort(digits.begin() + i + 1, digits.end());

    // Convert the digits back to a number
    long long result = 0;
    for (int digit : digits) {
        result = result * 10 + digit;
    }

    return result;
}

int main() {
    long long num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    long long nextNum = nextBiggerNumber(num);

    if (nextNum == -1) {
        std::cout << "No bigger number can be formed." << std::endl;
    } else {
        std::cout << "The next bigger number is: " << nextNum << std::endl;
    }

    return 0;
}
//
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;


long nextBigger(long n) {
    string s = to_string(n);
    if (next_permutation(s.begin(), s.end())) {
        return stoul(s);
    }
    return -1;
}
