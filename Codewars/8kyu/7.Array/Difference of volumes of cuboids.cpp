#include <iostream>
#include <vector>
using namespace std;

#include <array>
#include <cstdlib>

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
  int sum1 {1}, sum2 {1};
  for (auto num: a) sum1 *= num;
  for (auto num: b) sum2 *= num;
  return abs(sum1-sum2);
}

/////////////////////////
#include <array>
int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
  return abs(a[0] * a[1] * a[2] - b[0] * b[1] * b[2]);
}