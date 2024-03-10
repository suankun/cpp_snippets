// https://www.codewars.com/kata/5ae62fcf252e66d44d00008e/train/cpp
#include <iostream>
using namespace std;

unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    int max {};
    if (a+b+c>max) max=a+b+c;
    if (a*b*c>max) max=a*b*c;
    if ((a+b)*c>max) max=(a+b)*c;
    if (a*(b+c)>max) max=a*(b+c);
    return max ; 
}

int main() {
    cout << expressionsMatter(5, 1, 3);  // 20

    return 0;
}
///////////////
#include <algorithm>

unsigned short expressionsMatter(unsigned short a, unsigned short b, unsigned short c) {
  return std::max({a + b + c, a * (b + c), (a + b) * c, a * b * c});
}