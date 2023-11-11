// https://www.codewars.com/kata/5913152be0b295cf99000001/train/cpp
int divisions(const int& n, const int& divisor) {
    if (divisor == 1) return -2147483648;
    int number_of_divisions = 0;
    int num = n;
    while (num>=divisor) {
        num/=divisor;
        number_of_divisions++;
    }
    return number_of_divisions;
}
//
#include <cmath>

int divisions(const int& n, const int& divisor) {
  return log(n) / log(divisor);
}
