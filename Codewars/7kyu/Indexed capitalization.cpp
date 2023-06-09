// https://www.codewars.com/kata/59cfc09a86a6fdf6df0000f1/train/cpp
#include <iostream>
#include <vector>
#include <string>

std::string capitalize(std::string s, std::vector<int> idxs)
{
  for (size_t i {}; i<idxs.size(); i++) {
    s[idxs[i]] = std::toupper(s[idxs[i]]);
  }
  return s;
}