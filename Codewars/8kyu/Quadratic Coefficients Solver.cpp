// https://www.codewars.com/kata/5d59576768ba810001f1f8d6/train/cpp
#include <tuple>

std::tuple<int, int, int> quadratic(int x1,int x2){
  return {1, (-x1 - x2), (x1 * x2)};
}
