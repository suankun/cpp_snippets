// https://www.codewars.com/kata/5715eaedb436cf5606000381/train/cpp

#include <vector>

int positive_sum (const std::vector<int> arr){
  int sum {};
  for (auto num: arr) {
    if (num > 0) sum += num;
  }
  return sum;
}