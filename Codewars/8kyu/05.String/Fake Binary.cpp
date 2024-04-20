// https://www.codewars.com/kata/57eae65a4321032ce000002d/train/cpp
#include <iostream>
#include <string>
using namespace std;

std::string fakeBin(std::string str){
    std::string res;
    for (auto el: str) {
        if (el < 53) res += "0"; // 53 is ascii code for 5
        else res += "1";
    }
    return res;
}

int main() {
    string nums {"45385593107843568"};  // 01011110001100111
    cout << fakeBin(nums) << endl;

    return 0;
}
//
#include <string>

std::string fakeBin(std::string str){
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = ((str[i] - '0') > 4) ? '1' : '0';
    }
    return str;
}
