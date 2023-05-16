#include <vector>

int square_sum(const std::vector<int>& numbers)
{
    int sum {};
    for (auto num: numbers)
        sum += num*num;
    return sum;
}