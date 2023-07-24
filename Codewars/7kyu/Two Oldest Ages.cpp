// https://www.codewars.com/kata/511f11d355fe575d2c000001/train/cpp
#include <vector>
#include <array>
#include <algorithm>

std::array<int, 2> two_oldest_ages(std::vector<int> ages)
{
    std::array<int, 2> two_oldest;
    sort(ages.begin(), ages.end(), std::greater<int>());
    two_oldest[0] = ages[1];
    two_oldest[1] = ages[0];
    return two_oldest;
}
//
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

array<int, 2> two_oldest_ages(vector<int> ages)
{
  sort(ages.begin(), ages.end());
  return { ages[ages.size() - 2],ages[ages.size() - 1] };
}
