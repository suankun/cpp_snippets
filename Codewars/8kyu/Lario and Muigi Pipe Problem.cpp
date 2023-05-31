// https://www.codewars.com/kata/56b29582461215098d00000f/train/cpp

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#include <vector>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
    std::vector <int> sorted_pipes;
    std::vector <int> fixed_pipes;
    for (auto num: nums) sorted_pipes.push_back(num);
    sort(sorted_pipes.begin(), sorted_pipes.end());
    int start {sorted_pipes[0]};
    int end {sorted_pipes[sorted_pipes.size()-1]};
    for (int i {start}; i<=end; i++) fixed_pipes.push_back(i);

    return fixed_pipes;
}

int main() {
    std::vector <int> init {13, 16, 18, 14, 10, 17, 12};
    std::vector <int> res = pipe_fix(init);
    for (auto pipe: res) std::cout << pipe << " ";
    std::cout << std::endl;
    
    return 0;
}

/////////////
#include <vector>
#include <algorithm>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
  int mini = *min_element(nums.begin(), nums.end());
  int maxi = *max_element(nums.begin(), nums.end());
  std::vector<int> arr;
  for(int i = mini; i <= maxi; i++){
    arr.push_back(i);
  }
  return arr;
}