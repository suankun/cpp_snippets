// https://www.codewars.com/kata/5b0d67c1cb35dfa10b0022c7/train/cpp
#include <iostream>
using namespace std;

unsigned int squaresNeeded(long long n) {
  if (n == 0) return 0;
  long long res {1};
  unsigned int squares {1};
  while (res < n) {
    res *= 2;
    if (res > n) break;
    squares++;
  }
  return squares;
}

int main() {
    cout << squaresNeeded(1) << endl;  // 1
    cout << squaresNeeded(2) << endl;  // 2
    cout << squaresNeeded(3) << endl;  // 2
    cout << squaresNeeded(4) << endl;  // 3

    return 0;
}
//
unsigned int squaresNeeded(long long n)
{
  if(n == 0)
  {
    return 0;
  }
  else
  {
    return 1 + squaresNeeded(n / 2);
  }
}
//
#include <cmath>

unsigned int squaresNeeded(long long n) {
    return std::log2(n) + 1;
}
