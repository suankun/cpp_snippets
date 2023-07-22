// https://www.codewars.com/kata/57a083a57cb1f31db7000028/train/cpp
#include <vector>
#include <cstdint>
#include <cmath>

std::vector<uint64_t> powers_of_two(int n) {
  std::vector<uint64_t> result;
    for (int i = 0; i <= n; ++i) {
        uint64_t powerOfTwo = std::pow(2, i);
        result.push_back(powerOfTwo);
    }
    return result;
}
//
#include <vector>
#include <cstdint>
#include <cmath>

std::vector<uint64_t> powers_of_two(int n) {
  std::vector<uint64_t> vec;
  for(int i = 0; i<=n; i++){
    vec.push_back(pow(2,i));
  }
  return vec;
}
