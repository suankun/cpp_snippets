// https://www.codewars.com/kata/5a4e3782880385ba68000018/train/cpp
#include <string>
using namespace std;

string balancedNum (unsigned long long int number) {
    if (number < 100) return "Balanced";
  
    int leftSideSum = 0, rightSideSum = 0;
    std::string numInStr = to_string(number);
    size_t len = numInStr.length() % 2 == 0 ? numInStr.length() / 2 - 1 : numInStr.length() / 2;
    for (size_t i = 0; i < len; i++) {
        leftSideSum += (numInStr[i] - '0');
    }
  
    for (size_t j = numInStr.length() / 2 + 1; j < numInStr.length(); j++) {
        rightSideSum += (numInStr[j] - '0');
    }
  
    return leftSideSum == rightSideSum ? "Balanced" : "Not Balanced";
}
//
// const char* balancedNum(unsigned long long int n)
// {
//     auto str = std::to_string(n);
//     int balance = 0;
//     for (size_t i = 0, j = str.size() / 2 + 1; j < str.size(); i++, j++)
//     {
//         balance += str[i];
//         balance -= str[j];
//     }
//     return (balance == 0)? "Balanced" : "Not Balanced";
// }
//
#include <numeric>
std::string balancedNum (unsigned long long int number) {
    auto s = std::to_string(number);
    return (std::accumulate(s.begin(), s.begin() + (s.size() - 1) / 2, 0) == std::accumulate(s.begin() + s.size() / 2 + 1, s.end(), 0)) ? "Balanced" : "Not Balanced";
}
