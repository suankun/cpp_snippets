// https://www.codewars.com/kata/554b4ac871d6813a03000035/train/cpp
#include <iostream>
#include <vector>
using namespace std;

#include <string>

std::string highAndLow(const std::string& numbers){
    std::string res, temp_str;
    std::vector<int> temp_nums;
    for (size_t i {}; i<numbers.length(); i++) {
        if (numbers[i]==' ') {
            temp_nums.push_back(stoi(temp_str));
            temp_str="";
            continue;
        }
        temp_str+=numbers[i];
    }
    temp_nums.push_back(stoi(temp_str));

    int min {temp_nums[0]}, max {temp_nums[0]};
    for (size_t i {}; i<temp_nums.size(); i++) {
        if (min>temp_nums[i]) min=temp_nums[i];
        else if (max<temp_nums[i]) max=temp_nums[i];
    }
    res+=to_string(max) + ' ' + to_string(min);
    return res;
}

int main() {
    cout << highAndLow("1 9 3 4 -5");  // "9 -5"

    return 0;
}
///////////////
#include <string>
#include <sstream>
#include <limits>

std::string highAndLow(const std::string& numbers){
  std::stringstream ss(numbers);
  int temp, min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();
  while (ss >> temp) {
    min = (temp < min) ? temp : min;
    max = (temp > max) ? temp : max;
  };
  return std::to_string(max) + " " + std::to_string(min);
}