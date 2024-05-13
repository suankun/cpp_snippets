// https://www.codewars.com/kata/58e3ea29a33b52c1dc0000c0/train/cpp
#include <cmath>   // for round()
#include <iomanip> // for setprecision()

// struct Vector {
//     double x, y, z;
//     Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}
// };

double dot_product(const Vector& a, const Vector& b) {
    return round((a.x * b.x + a.y * b.y + a.z * b.z) * 1e6) / 1e6; // rounding to 6 decimal places
}
//
double dot_product(const Vector& a, const Vector& b){
    return a.x * b.x + a.y * b.y + a.z * b.z;
}
//
#include <iomanip>

double dot_product(const Vector& a, const Vector& b){
    std::cout << std::setprecision(6);
    return (a.x * b.x) + (a.y * b.y) + (a.z * b.z); 
}
