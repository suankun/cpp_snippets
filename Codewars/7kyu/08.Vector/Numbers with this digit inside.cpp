// https://www.codewars.com/kata/57ad85bb7cb1f3ae7c000039/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<long> numbersWithDigitInside(long x, long d)
{
    std::vector<long> result(3, 0);

    for (long i = 1; i <= x; ++i)
    {
        if (std::to_string(i).find(std::to_string(d)) != std::string::npos)
        {
            result[0]++;
            result[1] += i;
            result[2] = (result[2] == 0) ? i : result[2] * i;
        }
    }

    return result;
}
//
static bool containsDigit(long n, long d)
{
  while (n)
  {
    if (n % 10 == d)
    {
      return true;
    }
    
    n /= 10;
  }
  
  return false;
}

std::vector<long> numbersWithDigitInside(long x, long d)
{
    long count = 0;
    long sum = 0;
    long product = 1;
    
    for (long i = 1; i <= x; ++i)
    {
      if (containsDigit(i, d))
      {
        ++count;
        sum += i;
        product *= i;
      }
    }
    
    return {count, sum, count > 0 ? product : 0};
}
