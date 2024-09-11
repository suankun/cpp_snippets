// https://www.codewars.com/kata/56b5dc75d362eac53d000bc8/train/cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

std::string calculateString(std::string calcIt) 
{
    std::string leftStr = "", rightStr = "";
    char op = '0';
    for (size_t i {}; i<calcIt.length(); i++) {
        if (isdigit(calcIt[i]) || calcIt[i] == '.') leftStr += calcIt[i];
        else if (calcIt[i] == '+' || calcIt[i] == '-' || calcIt[i] == '*' || calcIt[i] == '/') {
            op = calcIt[i];
            for (size_t j {i+1}; j<calcIt.length(); j++) {
                if (isdigit(calcIt[j]) || calcIt[j] == '.') rightStr += calcIt[j];
            }
            break;
        }
    }

    double left {stod(leftStr)}, right {stod(rightStr)}, res {};
    switch (op) {
    case '+': res = left + right; break;
    case '-': res = left - right; break;
    case '*': res = left * right; break;
    case '/': res = left / right; break;
    }

    int result = round(res);
    return std::to_string(result);
} 

int main() {
    cout << calculateString(";$%§fsdfsd235??df/sdfgf5gh.000kk0000") << endl;  // 47

    return 0;
}
