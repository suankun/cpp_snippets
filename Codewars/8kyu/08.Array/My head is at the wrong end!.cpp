// https://www.codewars.com/kata/56f699cd9400f5b7d8000b55/train/cpp
#include <iostream>
#include <array>
#include <string>

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
  return {arr[2], arr[1], arr[0]};
}

int main() {
    std::array<std::string, 3> res = fixTheMeerkat({ "tail", "body", "head" });
    for (auto el: res) std::cout << el << " " << std::endl;

    return 0;
}
//
// std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
  
//   reverse(arr.begin(), arr.end());
//   return arr;
// }
