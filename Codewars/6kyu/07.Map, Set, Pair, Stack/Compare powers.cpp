// https://www.codewars.com/kata/55b2549a781b5336c0000103/train/cpp

// But what about, say, 210 and 310? You know this one too.

// Things tend to get a bit more complicated with both different bases and exponents: which is larger between 39 and 56?

// Well, by now you have surely guessed that you have to build a function to compare powers, returning -1 if the first member is larger, 0 if they are equal, 1 otherwise; powers to compare will be provided in the [base, exponent] format:

// compare_powers([2,10],[2,15])==1
// compare_powers([2,10],[3,10])==1
// compare_powers([2,10],[2,10])==0
// compare_powers([3,9],[5,6])==-1
// compare_powers([7,7],[5,8])==-1
// Only positive integers will be tested, including bigger numbers - you are warned now, so be diligent try to implement an efficient solution not to drain too much on CW resources ;)!

#include <iostream>
#include <cmath>
#include <utility>
using namespace std;

int comparePowers(std::pair<long, long> n1, std::pair<long, long> n2) {
    double f = std::log10(n1.first) * n1.second;
    double s = std::log10(n2.first) * n2.second;

    return f == s ? 0 : f > s ? -1 : 1;
}

int main() {
    cout << comparePowers({2,10},{2,15}) << endl; //  1
    cout << comparePowers({1,10},{3,10}) << endl; //  1
    cout << comparePowers({2,4},{4,2})   << endl; //  0
    cout << comparePowers({3,9},{1,6})   << endl; // -1
    cout << comparePowers({1,10},{1,15}) << endl; //  0   

    return 0;
}
