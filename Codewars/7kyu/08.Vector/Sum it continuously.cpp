// https://www.codewars.com/kata/59b44d00bf10a439dd00006f/train/cpp
#include <vector>

std::vector<int> add(const std::vector<int>& arr)
{
    std::vector<int> res;
    int sum = 0;
    for (const int& n : arr) {
        sum += n;
        res.push_back(sum);
    }
    return res;
}
//
#include <vector>
#include <numeric>

std::vector<int> add(std::vector<int> arr)
{
    std::inclusive_scan(arr.cbegin(), arr.cend(), arr.begin());
    return arr;
}
