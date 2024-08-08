// https://www.codewars.com/kata/5d0365accfd09600130a00c9/train/cpp
  #include <vector>
  #include <algorithm>
  #include <numeric>
  #include <climits>

  int solve(std::vector<std::vector<int>> arr) {
      // Initial min and max values (like new IntSummaryStatistics(2, 1, 1, 2) in Java)
      int minVal = 1;
      int maxVal = 1;

      // Iterate over each array in the 2D vector
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
