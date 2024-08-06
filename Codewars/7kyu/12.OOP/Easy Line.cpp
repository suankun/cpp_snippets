// https://www.codewars.com/kata/56e7d40129035aed6c000632/train/cpp
#include <cmath>

class EasyLine
{
public:
    static long long easyLine(int n);
};

long long EasyLine::easyLine(int n)
{
    double sum = 1.0;
    for (int i = 1; i <= n; ++i)
    {
        sum *= (n + i) / static_cast<double>(i);
    }
    return round(log(sum));
}
//
#include <cmath>

class EasyLine
{
public:
    static long long easyLine(int n)
    {
        double val = 1;
        for(long long k = 1; k <= n; ++k)
            val += log(n+k) - log(k);

        return (long long) round(val - 1);
    }
};
