// https://www.codewars.com/kata/557592fcdfc2220bed000042/train/cpp
#include <string>
#include <vector>

std::string pattern(int n)
{
    std::string result;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            result += std::to_string((i + j) % n + 1);
        }
        if (i != n - 1)
        {
            result += '\n';  // Add newline after each row except the last one
        }
    }

    return result;
}
