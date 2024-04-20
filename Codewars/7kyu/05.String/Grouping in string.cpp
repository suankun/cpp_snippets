// https://www.codewars.com/kata/5ee8ba31b44cc30032cbce04/train/cpp
#include <iostream>

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isConsecutive(string s){
    for (size_t i {}; i < s.length()-1; i++) {
        if (s[i] == s[i+1]) continue;
        else {
            for (size_t j {i+1}; j < s.length(); j++) {
                if (s[i] == s[j]) return false;
            }
        }
    }
    return true;
}

int main() {
    std::cout << boolalpha;
    std::cout << isConsecutive("112200") << std::endl;  // true
    std::cout << isConsecutive("11220011") << std::endl;  // false

    return 0;
}
