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
