// https://www.codewars.com/kata/5f70c883e10f9e0001c89673/train/cpp
#include <vector>
#include <algorithm>

std::vector<int> flip(const char dir, const std::vector<int>& arr) {
    std::vector<int> result = arr;
    if (dir == 'R') {
        // Sort the vector in ascending order to move the smaller cubes to the right
        std::sort(result.begin(), result.end());
    } else if (dir == 'L') {
        // Sort the vector in descending order to move the smaller cubes to the left
        std::sort(result.rbegin(), result.rend());
    }
    return result;
}
//
#include <vector>

std::vector<int> flip(const char dir, std::vector<int> arr) {
    if(dir == 'R')
      sort(arr.begin(),arr.end());
    else
      sort(arr.rbegin(),arr.rend());
    return arr;
}
