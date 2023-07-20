// https://www.codewars.com/kata/5388f0e00b24c5635e000fc6/train/cpp
#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
  int temp = values.first;
  values.first = values.second;
  values.second = temp;
  return values;
}
//
#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
  std::swap(values.first, values.second);
  return values;
}
