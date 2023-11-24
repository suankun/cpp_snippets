// https://www.codewars.com/kata/59dd2c38f703c4ae5e000014/train/cpp
#include <iostream>
using namespace std;

#include <string>

int solve(std::string s){
    int max = 0;
    int currentNumber = 0;

    for (char ch : s) {
        if (isdigit(ch)) {
            currentNumber = currentNumber * 10 + (ch - '0');
        } else {
            if (max < currentNumber) max = currentNumber;
            currentNumber = 0;
        }
    }

    if (max < currentNumber) max = currentNumber;

    return max;
}

int main() {
    cout << solve("gh12cdy695m1") << endl;  // 695
    cout << solve("2ti9iei7qhr5") << endl;  // 9
    cout << solve("lu1j8qbbb85") << endl;  // 85
    cout << solve("185lu1j8qbbb85") << endl;  // 185

    return 0;
}
