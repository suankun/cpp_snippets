// https://www.codewars.com/kata/56d19b2ac05aed1a20000430/train/cpp
#include <vector>
#include <algorithm>

int betweenExtremes(const std::vector<int>& numbers) {
    std::vector<int> sorted = numbers;
    sort(sorted.begin(), sorted.end());
    return sorted[sorted.size()-1]-sorted[0];
}
//
int betweenExtremes(const std::vector<int>& numbers){
    auto n = std::minmax_element(numbers.begin(),numbers.end());
    return *n.second-*n.first;
}
