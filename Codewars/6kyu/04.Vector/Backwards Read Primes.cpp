// https://www.codewars.com/kata/5539fecef69c483c5a000015/train/cpp

// Backwards Read Primes are primes that when read backwards in base 10 (from right to left) are a different prime. (This rules out primes which are palindromes.)

// Examples:
// 13 17 31 37 71 73 are Backwards Read Primes
// 13 is such because it's prime and read from right to left writes 31 which is prime too. Same for the others.

// Task
// Find all Backwards Read Primes between two positive given numbers (both inclusive), the second one always being greater than or equal to the first one. The resulting array or the resulting string will be ordered following the natural order of the prime numbers.

// Examples (in general form):
// backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97] backwardsPrime(9900, 10000) => [9923, 9931, 9941, 9967] backwardsPrime(501, 599) => []

// See "Sample Tests" for your language.

// Notes
// Forth Return only the first backwards-read prime between start and end or 0 if you don't find any
// Ruby Don't use Ruby Prime class, it's disabled.

#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <sstream>

class BackWardsPrime
{
public:
    static std::string backwardsPrime(long long start, long long end);

private:
    static bool isPrime(long long num);
    static bool isReversePrime(long long num);
};

bool BackWardsPrime::isPrime(long long num)
{
    if (num < 2)
        return false;
    for (long long i = 2; i <= std::sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool BackWardsPrime::isReversePrime(long long num)
{
    std::string numStr = std::to_string(num);
    std::reverse(numStr.begin(), numStr.end());
    long long reverseNum = std::stoll(numStr);
    if (num != reverseNum)
    {
        return isPrime(reverseNum);
    }
    return false;
}

std::string BackWardsPrime::backwardsPrime(long long start, long long end)
{
    std::vector<long long> result;
    for (long long i = start; i <= end; i++)
    {
        if (isPrime(i) && isReversePrime(i))
        {
            result.push_back(i);
        }
    }

    std::ostringstream oss;
    for (size_t i = 0; i < result.size(); i++)
    {
        if (i > 0)
            oss << " ";
        oss << result[i];
    }
    return oss.str();
}
