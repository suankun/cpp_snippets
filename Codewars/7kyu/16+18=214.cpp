// https://www.codewars.com/kata/5effa412233ac3002a9e471d/train/cpp
#include <iostream>
#include <string>
using namespace std;
unsigned add(unsigned x, unsigned y)
{
    std::string res = "";

    while (x > 0 || y > 0) {
        int firstDigit = x % 10;
        int secondDigit = y % 10;
        std::string temp = std::to_string(firstDigit + secondDigit);
        res.insert (0, temp);
        x /= 10;
        y /= 10;
    }

    return res.length()==0 ? 0 : stoi(res);
}

int main() {
    cout << add(16, 18) << endl;  // 214
    cout << add(122, 81) << endl; // 1103
    cout << add(26, 39) << endl;  // 515

    return 0;
}
