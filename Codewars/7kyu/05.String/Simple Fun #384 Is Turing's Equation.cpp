// https://www.codewars.com/kata/5a1e6323ffe75f71ae000026/train/cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_turing_equation(std::string s){
    int op = s.find('+');
    int eq = s.find('=');

    string firstNum = s.substr(0, op);
    string secondNum = s.substr(op + 1, eq - firstNum.length() - 1);
    string result = s.substr(eq + 1, s.length() - 1);

    reverse(firstNum.begin(), firstNum.end());
    reverse(secondNum.begin(), secondNum.end());
    reverse(result.begin(), result.end());

    // cout << firstNum << ',' << secondNum << ',' << result << endl;

    return stoi(firstNum) + stoi(secondNum) == stoi(result);
}

int main() {
    cout << boolalpha;
    cout << is_turing_equation("73+42=16") << endl;  // true 
    cout << is_turing_equation("5+8=13") << endl;  // false
    cout << is_turing_equation("10+20=30") << endl;  // true
    cout << is_turing_equation("0001000+000200=00030") << endl;  // true
    cout << is_turing_equation("1234+5=1239") << endl;  // false
    cout << is_turing_equation("1+0=0") << endl;  // false
    cout << is_turing_equation("7000+8000=51") << endl;  // true
    cout << is_turing_equation("0+0=0") << endl;  // true

    return 0;
}
