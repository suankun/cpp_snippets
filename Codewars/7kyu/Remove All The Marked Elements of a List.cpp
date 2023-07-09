// https://www.codewars.com/kata/563089b9b7be03472d00002b/train/cpp
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> remove_values(std::vector<int> integers, std::vector<int> values) {
  std::vector<int> res;
  int flag {};
  for (size_t i {}; i<integers.size(); i++) {
    for (size_t j {}; j<values.size(); j++) {
      if (integers[i] != values[j]) continue;
      else flag = 1;
    }
    if (flag) flag = 0;
    else res.push_back(integers[i]);
  }
  return res;
}
//
// #include <vector>

// std::vector<int> remove_values(std::vector<int> integers, std::vector<int> values) {
//   for(int i: values) integers.erase(std::remove(integers.begin(), integers.end(), i), integers.end());
//   return integers;
// }