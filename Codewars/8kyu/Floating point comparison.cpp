// https://www.codewars.com/kata/5f9f43328a6bff002fa29eb8/train/cpp
#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
    if (abs(a - b) >= 0.001) return false;
    return true;
}
//
bool approx_equals(double a, double b) {
  return abs(a - b) < 0.001;
}
