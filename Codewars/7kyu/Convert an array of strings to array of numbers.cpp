// codewars.com/kata/5783d8f3202c0e486c001d23/train/cpp
#include <vector>
#include <string>

std::vector<float> to_float_array(const std::vector<std::string>& arr) {
    std::vector<float> res;
    for (size_t i {}; i<arr.size(); i++) {
        res.push_back(std::stof(arr[i]));
    }
    return res;
}
//
#include <vector>
#include <string>

std::vector<float> to_float_array(const std::vector<std::string>& arr) {
  std::vector<float> ans;
  for(auto s: arr)
    ans.push_back(stof(s));
  return ans;
}
