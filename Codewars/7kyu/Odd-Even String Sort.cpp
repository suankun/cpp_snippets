// https://www.codewars.com/kata/580755730b5a77650500010c/train/cpp
#include <iostream>
#include <string>
using namespace std;

string sortMyString(const string &s)
{
    std::string result, even, odd;
    for (size_t i {}; i<s.length(); i++) {
        if (i%2==0) even += s[i];
        else odd += s[i];
    }
    result += even + ' ' + odd;
    return result;
}