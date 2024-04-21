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
