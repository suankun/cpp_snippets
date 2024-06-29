// https://www.codewars.com/kata/55efecb8680f47654c000095/train/cpp
#include <cmath>

class IntSqRoot
{
public:
    static long long intRac(long long n, long long guess)
    {
        long long x = guess;
        long long e = 1;
        long long count = 0;

        while (true)
        {
            long long new_x = (x + n / x) / 2;
            if (abs(new_x - x) < e)
                break;
            x = new_x;
            count++;
        }

        return count+1;
    }
};
//
#include <cmath>

using namespace std;

class IntSqRoot
{
    public:
    static long long intRac(long long n, long long guess);
};

long long IntSqRoot::intRac(long long n, long long guess)
{
    int counter = 0;
    for (long long prevGuess = 0; std::abs(guess - prevGuess) >= 1; counter++)
    {
        prevGuess = guess;
        guess = (guess + n / guess) / 2;
    }
    return counter;
}
//
#define ll long long
struct IntSqRoot {
    static ll intRac(ll n, ll g) {
        for (ll r = 0; ++r;)
        if (ll p = g; p == (g = (g + n / g) / 2))
            return r;
    }
};
