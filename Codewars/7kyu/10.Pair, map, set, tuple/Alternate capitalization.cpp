// https://www.codewars.com/kata/59cfc000aeb2844d16000075/train/cpp
#include <iostream>
using namespace std;

#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string &s)
{
    std::string even;
    std::string odd;
    for (size_t i {}; i<s.length(); i++) {
        if (i % 2 == 0) even.push_back(toupper(s[i]));
        else even.push_back(s[i]);
    }
    for (size_t j {}; j<s.length(); j++) {
        if (j % 2 == 0) odd.push_back(s[j]);
        else odd.push_back(toupper(s[j]));
    }
    return {even, odd};
}

int main() {
    std::string str = {"abcdef"}; // "AbCdEf", "aBcDeF"
    cout << capitalize(str).first << endl;
    cout << capitalize(str).second << endl;
    
    return 0;
}
