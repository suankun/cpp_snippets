// https://www.codewars.com/kata/58e3ea29a33b52c1dc0000c0/train/cpp
#include <cmath>   // for round()
#include <iomanip> // for setprecision()

double dot_product(const Vector& a, const Vector& b) {
    return round((a.x * b.x + a.y * b.y + a.z * b.z) * 1e6) / 1e6; // rounding to 6 decimal places
}
