// https://www.codewars.com/kata/55e6f5e58f7817808e00002e/train/cpp
#include <iostream>
using namespace std;

class DivSeven
{
public:
    static std::pair <long long, long long> seven(long long m);
};

std::pair <long long, long long> DivSeven::seven(long long m) {
    std::pair <long long, long long> result;
    int steps {};

    while (m >= 100) {
        long long last_digit = m%10;
        long long remaining_digits = m/10;
        steps++;
        m = remaining_digits - (last_digit*2);
        if (m >= 100) continue;
        else if (m % 7 == 0) {
            result.first = m;
            result.second = steps;
            return result;
        } else {
            result.first = m;
            result.second = steps;
        }
    }

    return result;
}

int main() {
    DivSeven one {};
    std::pair <long long, long long> result = one.seven(1021);  // 10, 2
    cout << result.first << ", " << result.second << endl;

    return 0;
}