// https://www.codewars.com/kata/52b5247074ea613a09000164/train/cpp
#include <cmath>
unsigned int cookingTime(unsigned int eggs) {
  if (eggs == 0) return 0;
  double check = ceil(eggs/8.0);
  return eggs<=8 ? 5 : ((static_cast<int>(check)) * 5);
}
//
#include <cmath>
unsigned int cookingTime(unsigned int eggs) {
  return ceil(eggs / 8.0) * 5;
}
