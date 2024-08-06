/// https://www.codewars.com/kata/57f75cc397d62fc93d000059/train/cpp
#include <iostream>
#include <string>
#include <cmath>

int calc(const std::string& x) {
    std::string replaced_seven = x;

    std::string total1 = "";
    std::string total2 = "";

    for (char c : x) {
        int temp = c;
        total1 += std::to_string(temp);
    }

    for (char c : total1) {
        char temp = (c == '7') ? '1' : c;
        total2 += temp;
    }
  
    int num1 = 0, num2 = 0;
    for (size_t i = 0; i < total1.length(); i++) {
      num1 += (10 * i) + (total1[i] - '0');
    }
    for (size_t i = 0; i < total2.length(); i++) {
      num2 += (10 * i) + (total2[i] - '0');
    }
  
    return std::abs(num1 - num2);
}
//
#include <string>

int calc(const std::string& x) {
    int s = 0;
    for (char c : x) s += (c % 10 == 7 ? 6 : 0) + (c / 10 % 10 == 7 ? 6 : 0);
    return s;
}
//
#include <string>
#include <numeric>

int calc(const std::string& x) {
    return std::transform_reduce(x.begin(), x.end(), 0, std::plus{},
            [](const auto &ch) { return (ch % 10 == 7 ? 6 : 0) + (ch / 10 % 10 == 7 ? 6 : 0); });
}
