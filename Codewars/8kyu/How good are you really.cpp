// https://www.codewars.com/kata/5601409514fc93442500010b/train/cpp
#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  double sum {};
  for (auto points: classPoints) sum += points;
  sum += yourPoints;
  return sum/(classPoints.size()+1)>yourPoints ? false : true;
}
///////////////
#include <vector>
#include <numeric>

bool betterThanAverage(const std::vector<int>& classPoints, const int yourPoints) {
  return std::accumulate(classPoints.cbegin(), classPoints.cend(), 0) < classPoints.size() * yourPoints;
}