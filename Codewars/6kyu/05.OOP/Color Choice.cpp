// https://www.codewars.com/kata/55be10de92aad5ef28000023/train/cpp
#include <cmath>
#include <algorithm>

class ColorChoice
{
public:
    static long long choose(int n, int x)
    {
        if (x == 1) {
            return n;
        } else if (n == x || x == 0) {
            return 1;
        }

        int bottom = std::max(x, n - x);
        x = std::min(x, n - x);
        
        double result = 1.0;

        while (n - bottom > 0 || x > 0) {
            if (bottom < n) {
                bottom++;
                result *= bottom;
            }
            if (x > 0) {
                result /= x;
                x--;
            }
        }

        return static_cast<long long>(std::round(result));
    }

    static long long checkChoose(long long m, int n)
    {
        for (int x = 0; x <= n; x++) {
            if (m == choose(n, x)) {
                return x;
            }
        }
        return -1;
    }
};
