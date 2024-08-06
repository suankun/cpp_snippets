// https://www.codewars.com/kata/546e2562b03326a88e000020/train/cpp
#include <iostream>
#include <string>

int square_digits(int num) {
    std::string str = std::to_string(num);
    std::string res = "";
    for (size_t i {}; i<str.length(); i++) {
        int temp_num = str[i] - '0';
        res += std::to_string(temp_num*temp_num);
        
    }
    int finalRes = stoi(res);
    return finalRes;
}
//
int square_digits(int num) {
    int multiplier = 1;
    int sum = 0;
    while (num > 0) {
        int sq = (num % 10) * (num % 10); // calculating square of the extracted number
        sum += sq * multiplier;
        /* if square is greater than 10, increase multiplier by 10
        note: the multiplier increases by 10 every successive iteration */
        if (sq >= 10) {
        multiplier *= 100;
        }
        else {
        multiplier *= 10;
        }
        // extracting the remaining numbers
        num /= 10;
    }
    return sum;
}
