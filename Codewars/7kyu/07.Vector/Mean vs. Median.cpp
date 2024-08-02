// https://www.codewars.com/kata/5806445c3f1f9c2f72000031/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

std::string meanVsMedian(std::vector<int> numbers)
{
    sort(numbers.begin(), numbers.end());
    double sum = accumulate(numbers.begin(), numbers.end(), 0.0);

    double mean = sum/numbers.size();
    int median = numbers[numbers.size()/2];

    return mean>median ? "mean" : mean==median ? "same" : "median";
}

int main() {
    std::vector<int> numbers1 = {1, 2, 37};
    cout << meanVsMedian(numbers1) << endl;  // "mean"
    std::vector<int> numbers2 = {7, 14, -70};
    cout << meanVsMedian(numbers2) << endl;  // "median"

    return 0;
}
//
#include <numeric>
std::string meanVsMedian(std::vector<int> numbers)
{
    int size = numbers.size();
    sort(numbers.begin(), numbers.end());
    double mean = double(accumulate(numbers.begin(), numbers.end(), 0)) / double(numbers.size());
    double median = size % 2 == 0 ? (numbers[size/2] + numbers[size/2 - 1]) / 2.0 : numbers[size/2];
    
    return median == mean ? "same" : median > mean ? "median" : "mean";
}