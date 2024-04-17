// https://www.codewars.com/kata/55736129f78b30311300010f/train/cpp
#include <string>

std::string pattern(int n)
{
    std::string pattern;
    if (n <= 0) return pattern;
    for (int i {1}; i<=n; i++) {
        for (int j {i}; j<=n; j++) {
            pattern += std::to_string(j);
        }
        pattern += "\n";
    }
    pattern.pop_back();
    return pattern;
}
//
std::string pattern(const int n)
{
    if (n < 1) return "";

    std::string pattern_str;

    for (int i = 1; i <= n; i++)
    {
        if (i != 1)
            pattern_str += '\n';

        for (int j = i; j <= n; j++)
            pattern_str += std::to_string(j);
    }
    return pattern_str;
}
