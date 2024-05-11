#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int> &arr)
{
  int sum {};
  for (auto num: arr) sum += num;
  if (sum % 2 == 0) return "even";
  else return "odd";
}
//
#include <string>
#include <vector>
#include <numeric>

std::string odd_or_even(const std::vector<int> &arr)
{
    return std::accumulate(arr.begin(),arr.end(),0)&1?"odd":"even";
}
