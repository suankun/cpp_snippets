// https://www.codewars.com/kata/59d28768a25c8c51a6000057/train/cpp
#include <iostream>
#include <cstdint>
#include <cmath>

uint64_t calc_ms(unsigned n){
  unsigned long long multip = 1;
  for (unsigned long long mult = 0; mult < n; mult++)
      multip *= 10;
  return pow(2, n) * multip;
}
//
#include <cmath>

uint64_t calc_ms(unsigned n) {
    return std::pow(20, n);
}
