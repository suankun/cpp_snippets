// https://www.codewars.com/kata/5d0365accfd09600130a00c9/train/cpp
  #include <vector>
  #include <algorithm>
  #include <numeric>
  #include <climits>

  int solve(std::vector<std::vector<int>> arr) {
      int minVal = 1;
      int maxVal = 1;

      for (const auto& array : arr) {
          int localMin = *std::min_element(array.begin(), array.end());
          int localMax = *std::max_element(array.begin(), array.end());

          int tempMin = std::min({maxVal * localMax, maxVal * localMin, minVal * localMax, minVal * localMin});
          int tempMax = std::max({maxVal * localMax, maxVal * localMin, minVal * localMax, minVal * localMin});

          minVal = tempMin;
          maxVal = tempMax;
      }

      return maxVal;
  }
//
int solve(std::vector<std::vector<int>> v){
    int min = 1, max = 1;
    for(std::vector<int> inner : v)
    {
        int y = *std::min_element(inner.begin(), inner.end()), x = *std::max_element(inner.begin(), inner.end());
        std::vector<int> a = { min * y, min * x, max * y, max * x };
        min = *std::min_element(a.begin(), a.end());
        max = *std::max_element(a.begin(), a.end());
    }
    return max;
 }
