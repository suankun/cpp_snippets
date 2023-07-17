// https://www.codewars.com/kata/56f69d9f9400f508fb000ba7/train/cpp
#include <iostream>
#include <vector>

std::vector<int> MonkeyCount(int n) {
  std::vector<int> res;
  for (size_t i {}; i<n; i++) res.push_back(i+1);
  return res;
}
//
#include <numeric>
#include <vector>

std::vector<int> MonkeyCount(int n) {
  std::vector<int> res(n);
  std::iota(res.begin(), res.end(), 1);
  return res;
}
