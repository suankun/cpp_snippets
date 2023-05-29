// https://www.codewars.com/kata/57d814e4950d8489720008db/train/cpp

#include <vector>
#include <cmath>

int index(const std::vector<int> &vector, int n) {
  return static_cast<unsigned long>(n) >= vector.size() ? -1 : pow(vector[n], n);
}