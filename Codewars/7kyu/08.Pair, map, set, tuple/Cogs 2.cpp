// https://www.codewars.com/kata/59e72bdcfc3c4974190000d9/train/cpp
#include <vector>
#include <utility>

using namespace std;

pair<double, double> cog_rpm(const vector<int> &cogs, int n)
{
    vector<int> d = {1, -1};
    double first_value = d[n % 2] * static_cast<double>(cogs[n]) / cogs[0];
    double second_value = d[(cogs.size() - n + 1) % 2] * static_cast<double>(cogs[n]) / cogs[cogs.size() - 1];
    return {first_value, second_value};
}
//
using namespace std;

pair<double, double> cog_rpm(const vector<int>& cogs, const int n) {
    return {
        (               n  % 2 ? -1. :  1.) * cogs[n] / cogs.front(),
        ((cogs.size() - n) % 2 ?  1. : -1.) * cogs[n] / cogs.back()
    };
}
