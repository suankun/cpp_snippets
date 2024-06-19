// https://www.codewars.com/kata/5a8d1c82373c2e099d0000ac/train/cpp
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

std::string solve(std::string s, int a, int b){
    if (b >= s.length())
        b = s.length() - 1;

    string firstPart = s.substr(0, a);
    string middlePart = s.substr(a, b - a + 1);
    string lastPart = s.substr(b + 1, s.length() - b - 1);

    reverse(middlePart.begin(), middlePart.end());
    return firstPart + middlePart + lastPart;
}

int main()
{

    // cout << solve("0123456789",1,5)  << endl;  // "cawedors"
    cout << solve("codewars",1,5)  << endl;  // "cawedors"
    // cout << solve("codingIsFun",2,100)  << endl;  // "conuFsIgnid"
    // cout << solve("FunctionalProgramming", 2,15)  << endl;  // "FuargorPlanoitcnmming"
    // cout << solve("abcefghijklmnopqrstuvwxyz",0,20)  << endl;  // "vutsrqponmlkjihgfecbawxyz"
    // cout << solve("abcefghijklmnopqrstuvwxyz",5,20)  << endl;  // "abcefvutsrqponmlkjihgwxyz"

    return 0;
}
//
std::string solve(std::string s, int a, int b)
{
    std::reverse(s.begin() + a, s.begin() + (b >= s.size() ? s.size() : b + 1));
    return s;
}
