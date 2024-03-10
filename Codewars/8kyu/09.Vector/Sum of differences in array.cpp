// https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumOfDifferences(const std::vector<int>& arr){
    if (arr.size() < 2) return 0;
    std::vector<int> res = arr;
    sort(res.begin(), res.end(), std::greater<int>());
    int sum {};
    for (size_t i {}; i<res.size()-1; i++) {
        sum += (res[i] - res[i+1]);
    }
    
    return sum;
}

int main() {
    
    cout << sumOfDifferences({1,2,10}) << endl;  // 9

    return 0;
}
//
#include <vector>
#include <algorithm>
int sumOfDifferences(const std::vector<int>& arr) {
  if (arr.empty()) return 0;
  auto p = std::minmax_element(arr.cbegin(), arr.cend());
  return *p.second - *p.first;
}
