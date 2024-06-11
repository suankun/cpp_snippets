// https://www.codewars.com/kata/555bfd6f9f9f52680f0000c5/train/cpp
#include <iostream>
using namespace std;

long long reverseNumber(long long n) {
    long long rev_num=0;

    // keep sign of the number
    int flag=0;
    if (n<0) {
        flag=1;
        n*=-1;
    }

    // reverse the number
    while (n>0)
    {
        rev_num*=10;
        rev_num+=(n%10);
        n/=10;
    }

    return flag ? rev_num*-1 : rev_num;
}

int main() {
    // cout << reverseNumber(123) << endl;  // Equals(321)
    cout << reverseNumber(-123) << endl;  // Equals(-321)
    // cout << reverseNumber(1000) << endl;  // Equals(1)
    // cout << reverseNumber(4321234) << endl;  // Equals(4321234)
    // cout << reverseNumber(5) << endl;  // Equals(5)
    // cout << reverseNumber(0) << endl;  // Equals(0)
    // cout << reverseNumber(-5) << endl;  // Equals(-5)
    // cout << reverseNumber(98989898) << endl;  // Equals(89898989)
    // cout << reverseNumber(1234567890) << endl;  // Equals(987654321)
    // cout << reverseNumber(987654321) << endl;  // Equals(123456789)
    // cout << reverseNumber(-9876543210) << endl;  // Equals(-123456789)

    return 0;
}
//
long long reverseNumber(long long n) {
    long long res = 0;
    while(n != 0){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
