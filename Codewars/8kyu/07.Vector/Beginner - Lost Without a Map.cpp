// https://www.codewars.com/kata/57f781872e3d8ca2a000007e/train/cpp
#include <iostream>
#include <vector>
std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> values_pow (values.size(), 0);
  for (size_t i {}; i<values.size(); i++) values_pow[i] = values[i]*2;
  return values_pow;
}
//
std::vector<int> maps(const std::vector<int> & values) {
    std::vector<int> result;
    for(auto a:values) result.push_back(a*2);

    return result;
}
