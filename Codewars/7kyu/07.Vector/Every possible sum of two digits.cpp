// https://www.codewars.com/kata/5b4e474305f04bea11000148/train/cpp
#include <iostream>
using namespace std;

#include <bits/stdc++.h>
#include <vector>

std::vector<int> digits(int n){
    std::vector<int> digits;
    while (n!=0)
    {
        int temp = n%10;
        digits.push_back(temp);
        n/=10;
    }
    reverse(digits.begin(), digits.end());

    // for (auto n: digits) cout << n << ' ';
    // cout << endl;

    std::vector<int> res;
    for (int i=0; i<digits.size(); i++) {
        for (int j=i+1; j<digits.size(); j++) {
            res.push_back(digits[i]+digits[j]);
        }
    }

    return res;
}

int main() {
    std::vector<int> res = digits(156);  // {6, 7, 11}
    for (auto n: res) cout << n << ' ';

    return 0;
}
//
#include <vector>
std::vector<int> digits(int n){
    std::string a = std::to_string(n);
    std::vector<int> b;
    for(int i = 0; i < a.size(); i++){
        for(int j = i+1; j < a.size(); j++){
            b.push_back((a[i]-48)+(a[j]-48));
        }
    }
    return b;
}
