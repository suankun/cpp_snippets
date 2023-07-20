// https://www.codewars.com/kata/55edaba99da3a9c84000003b/train/cpp
#include <vector>
std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
    std::vector<int> divisible;
    for (auto num: numbers) if (num%divisor==0) divisible.push_back(num);
    return divisible;
}
