// https://www.codewars.com/kata/51675d17e0c1bed195000001/train/cpp
#include <iostream>
#include <string>

int largest_five_digits(const std::string &digits)
{
    int largest_num = 0;
    for (size_t i=0; i<digits.length()-4; i++) {
        int temp_num = stoi(digits.substr(i, 5));
        if (largest_num < temp_num) largest_num = temp_num;
    }
    return largest_num;
}

int main() {
    std::cout << largest_five_digits("283910") << std::endl;  // 83910
    std::cout << largest_five_digits("1234567890") << std::endl;  // 67890

    return 0;
}
//
#include <algorithm>
#include <string>

using namespace std;

int largest_five_digits(const string &digits)
{
    int n = 0;
    for (unsigned i = 0; i < digits.size()-4; i++)
        n = max(stoi(digits.substr(i, 5)), n);
    return n;
}