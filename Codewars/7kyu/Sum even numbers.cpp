// https://www.codewars.com/kata/586beb5ba44cfc44ed0006c3/train/cpp
#include <vector>

int sum_even_numbers(const std::vector<double> &seq) {
  int sum = 0;
    for (const auto& num : seq) {
        if (static_cast<int>(num) == num && static_cast<int>(num) % 2 == 0) {
            sum += num;
        }
    }
    return sum;
}
