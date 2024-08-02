// https://www.codewars.com/kata/59e1b9ce7997cbecb9000014/train/cpp
#include <vector>

double cog_rpm(const std::vector<int> &cogs)
{
    if (cogs.empty())
        return 0.0;

    int length = cogs.size();
    int sign = (length % 2) ? 1 : -1;
  
    return sign * static_cast<double>(cogs[0]) / cogs[length - 1];
}
//
double cog_rpm(const std::vector<int> &cogs)
{
    return (cogs.size() % 2 ? 1.0 : -1.0) * cogs.front() / cogs.back();
}
