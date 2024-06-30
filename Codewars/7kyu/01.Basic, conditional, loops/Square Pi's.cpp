// https://www.codewars.com/kata/5cd12646cf44af0020c727dd/train/cpp
#include <list>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int square_pi(int digits) {
    string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    if (digits > pi.length())
        digits = pi.length();

    int sum_of_squares = 0;
    for (int i = 0; i < digits; ++i) {
        int digit = pi[i] - '0';
        sum_of_squares += digit * digit;
    }

    return static_cast<int>(ceil(sqrt(sum_of_squares)));;
}
//
#include <list>
#include <iostream>
#include <cmath>

using namespace std;
int square_pi(int digits) {
    const char pi[] = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    int sqr_sum = 0;
    while (digits-- > 0) {
        int val = pi[digits] - '0';
        sqr_sum += val * val;
    }

    return std::ceil(std::sqrt(sqr_sum));
}
