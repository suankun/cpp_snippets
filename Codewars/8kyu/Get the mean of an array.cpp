// https://www.codewars.com/kata/563e320cee5dddcf77000158/train/cpp
#include <vector>

int get_average(std::vector <int> marks)
{
  double sum {};
  for (auto grade: marks) sum += grade;
  double avg = sum/marks.size();
  int result = avg;
  return result;
}
//
#include <vector>
#include <numeric>

int get_average(std::vector <int> marks)
{
  return accumulate(marks.begin(), marks.end(), 0) / marks.size();
}
