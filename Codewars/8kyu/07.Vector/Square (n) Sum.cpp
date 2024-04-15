// https://www.codewars.com/kata/515e271a311df0350d00000f/train/cpp
#include <vector>

int square_sum(const std::vector<int>& numbers)
{
    int sum {};
    for (auto num: numbers)
        sum += num*num;
    return sum;
}
