// https://www.codewars.com/kata/56d949281b5fdc7666000004/train/cpp
#include <vector>
#include <set>
#include <algorithm>

std::vector<int> testit(std::vector<int> a, std::vector<int> b)
{
    std::set<int> setA(a.begin(), a.end());
    std::set<int> setB(b.begin(), b.end());

    std::vector<int> uniqueA(setA.begin(), setA.end());
    std::vector<int> uniqueB(setB.begin(), setB.end());

    uniqueA.insert(uniqueA.end(), uniqueB.begin(), uniqueB.end());

    std::sort(uniqueA.begin(), uniqueA.end());

    return uniqueA;
}
