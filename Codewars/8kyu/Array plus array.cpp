// https://www.codewars.com/kata/5a2be17aee1aaefe2a000151/train/cpp
#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int result {};
  for (size_t i {}; i<a.size(); i++) result += a[i];
  for (size_t j {}; j<b.size(); j++) result += b[j];
  return result;
}

////////////
#include <numeric>
#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b)
{
  return std::accumulate(a.begin(), a.end(), 0) + std::accumulate(b.begin(), b.end(), 0);
}
