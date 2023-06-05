// https://www.codewars.com/kata/5a7893ef0025e9eb50000013/train/cpp
#include <vector>
#include <algorithm>
using namespace std; 

int maxGap (vector <int> numbers)
{
  int max_gap {};
  sort(numbers.begin(), numbers.end());
  for (size_t i {}; i<numbers.size()-1; i++) {
    int temp_gap = numbers[i+1]-numbers[i];
    if (temp_gap>max_gap) max_gap=temp_gap;
  }
  return max_gap;
}