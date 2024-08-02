// https://www.codewars.com/kata/59d9ff9f7905dfeed50000b0/train/cpp
#include <vector>
#include <string>

std::vector<int> solve(const std::vector<std::string>& arr) {
    std::vector<int> res;
    for (size_t i {}; i<arr.size(); i++) {
        std::string temp;
        for (auto ch: arr[i]) temp += std::tolower(ch);
        int count {};
        for (size_t j {}; j<temp.size(); j++) {
            int temp_ch = temp[j] - 'a';
            if (temp_ch == j) count++;
        }
        res.push_back(count);
    }
    return res;
};
//
#include <vector>
#include <string>
#include <cctype>

std::vector<int> solve(std::vector<std::string> v) {
  std::vector<int> result (v.size());
  for (int i = 0; i < v.size(); i++)
    for (int j = 0; j < v[i].length(); j++) 
      if (toupper(v[i][j]) - 65 == j)
        result[i]++;
  return result;
}
