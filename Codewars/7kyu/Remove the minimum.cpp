// https://www.codewars.com/kata/563cf89eb4747c5fb100001b/train/cpp
#include <iostream>
#include <vector>
using namespace std;

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers) {
    unsigned int min {numbers[0]};
    std::vector<unsigned int> res;
    for (size_t i {}; i<numbers.size(); i++) {
        res.push_back(numbers[i]);
        if (min > numbers[i]) min = numbers[i];
    }
    for (size_t j {}; j<res.size(); j++) {
        if (min == res[j]) {
            res.erase(res.begin()+j);
            break;
        }
        
    }
    return res;
}

int main() {
    std::vector<unsigned int> one {1, 2, 3, 4, 5};  // 2, 3, 4, 5
    std::vector<unsigned int> res = removeSmallest(one);
    for (auto num: res) cout << num << " ";

    return 0;
}
///////////////
#include <vector>
#include <algorithm>

std::vector<unsigned> removeSmallest(const std::vector<unsigned>& numbers)
{
  std::vector<unsigned> items = numbers;

  auto smallest = std::min_element(items.cbegin(), items.cend());
  if (smallest != items.cend()) items.erase(smallest);

  return items;
}