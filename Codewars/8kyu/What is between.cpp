// https://www.codewars.com/kata/55ecd718f46fba02e5000029/train/cpp
#include <vector>

std::vector<int> between(int start, int end) {
  std::vector <int> res;
  for (int i {start}; i <= end; i++) res.push_back(i);
  return res;
}  