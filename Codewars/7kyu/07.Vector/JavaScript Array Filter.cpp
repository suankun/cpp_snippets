// https://www.codewars.com/kata/514a6336889283a3d2000001/train/cpp
#include <vector>

std::vector<int> get_even_numbers(const std::vector<int>& arr) {
    std::vector<int> filtered;
    for (auto num: arr) {
        if (num % 2 == 0) filtered.push_back(num);
    }
    return filtered;
}
//
// #include <vector>

// std::vector<int> get_even_numbers(const std::vector<int>& arr) {
//   std::vector<int> result;
//   std::copy_if(arr.begin(), arr.end(), std::back_inserter(result), [](int i){return i%2 == 0;} );
//   return result;
// }
