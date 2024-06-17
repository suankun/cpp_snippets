// https://www.codewars.com/kata/57eaec5608fed543d6000021/train/cpp
#include <iostream>
#include <string>

using namespace std;

#include <vector>
#include <variant>

int divCon(const std::vector<std::variant<int, char>>& x) {
    int sumInts = 0, sumChars = 0;
    for (const auto& v : x) {
        if (std::holds_alternative<int>(v))
            sumInts += std::get<int>(v);
        else if (std::holds_alternative<char>(v))
            sumChars += std::get<char>(v) - '0';
    }

    return sumInts - sumChars;
}

int main()
{
    std::vector<std::variant<int, char>> x;
    x = { 9, 3, '7', '3' };
    cout << divCon(x) << endl;

    return 0;
}
