// https://www.codewars.com/kata/5b0c0ec907756ffcff00006e/train/cpp
// it is a Quadratic Equations ax2 + bx + c = 0
double quadratic(double a, double b, double c)
{
    return -c / b;
}
//
#include <cmath>
double quadratic(double a, double b, double c)
{
    return -2 * c / (b + sqrt(b * b - 4 * a * c));
}
