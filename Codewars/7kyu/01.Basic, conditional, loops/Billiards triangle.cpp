// https://www.codewars.com/kata/5bb3e299484fcd5dbb002912/train/cpp
int pyramid(int n) {
    int rows_total {}, balls {}, row {};
    while (balls < n) {
        row += 1;
        balls += row;
        if (n - balls < 0) break;
        rows_total++;
    }
    return rows_total;
}
//
#include <cmath>
int pyramid(const int n) {
    return (sqrt(8 * n + 1) - 1) / 2;
}
