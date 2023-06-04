// https://www.codewars.com/kata/585d7d5adb20cf33cb000235/train/cpp
#include <iostream>
#include <vector>

float find_uniq(const std::vector<float> &v) {
    float same_num {}, uniq_num {};
    // find the same numbers
  
    same_num = v[0]==v[1] ? v[0] : v[0]==v[2] ? v[0] : v[1]==v[2] ? v[1] : -1;
    // iterate through the vector to find the unique number
    for (size_t i {}; i<v.size(); i++) {
        if (same_num != v[i]) {
            uniq_num = v[i];
            break;
        }
    }
    return uniq_num;
}

int main() {
    std::vector<float> nums {0, 0.55, 0, 0, 0};
    std::cout << find_uniq(nums);

    return 0;
}
////////////////////
float find_uniq(const std::vector<float> &arr)
{
  float n = arr[0];
  if (n != arr[1] && n != arr[2]) return n;
  for(auto w: arr) {
    if (w != n) return w; 
  }
}