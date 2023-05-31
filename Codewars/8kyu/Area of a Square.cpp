// https://www.codewars.com/kata/5748838ce2fab90b86001b1a/train/cpp

#include <cmath>
double square_area(double A) {
  double r = (A * 4) / (2 * 3.14159265);
  return round((r*r)*100.0) / 100.0;
};
///////
#define _USE_MATH_DEFINES
#include <cmath>

double square_area(double A) {
  return round(pow(2 * A / M_PI, 2) * 100) / 100;
};