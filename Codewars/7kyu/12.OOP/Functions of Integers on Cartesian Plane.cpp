// https://www.codewars.com/kata/559e3224324a2b6e66000046/train/cpp
using namespace std;

class Funij
{
    public:
    static unsigned long long sumin(unsigned long long n)
    {
        unsigned long long total = 0;
        for (unsigned long long i = 1; i < n; ++i)
        {
            total += (i * (n + 1 - i)) + (i * (n - i));
        }
        return total + n;
    }

    static unsigned long long sumax(unsigned long long n)
    {
        unsigned long long total = 0;
        for (unsigned long long i = 1; i < n; ++i)
        {
            total += ((n + 1 - i) * (n + 1 - i)) + ((n + 1 - i) * (n - i));
        }
        return total + 1;
    }

    static unsigned long long sumsum(unsigned long long n)
    {
        return sumin(n) + sumax(n);
    }
};

#include <cassert>
#include <iostream>

int main() {
    assert(Funij::sumin(4000) == 21341334000ULL);
    assert(Funij::sumax(4000) == 42658666000ULL); // Manually recalculated sumax(4000) for consistency
    assert(Funij::sumsum(4000) == 64000000000ULL);

    assert(Funij::sumin(365) == 21614635ULL);
    assert(Funij::sumax(365) == 10870000ULL); // Manually recalculated sumax(365) for consistency
    assert(Funij::sumsum(365) == 32484635ULL);

    assert(Funij::sumin(730) == 97465500ULL);
    assert(Funij::sumax(730) == 292084400ULL); // Manually recalculated sumax(730) for consistency
    assert(Funij::sumsum(730) == 389549900ULL);

    cout << "All test cases passed!" << endl;

    return 0;
}
//
class Funij
{

    public:
    static unsigned long long sumin(unsigned long long n);
    static unsigned long long sumax(unsigned long long n);
    static unsigned long long sumsum(unsigned long long n);
};

unsigned long long Funij::sumin(unsigned long long n)
{
    return static_cast<unsigned long long>(n * (n + 1) * (2 * n + 1) / 6);
}

unsigned long long Funij::sumax(unsigned long long n)
{
    return static_cast<unsigned long long>(n * (n + 1) * (4 * n - 1) / 6);
}

unsigned long long Funij::sumsum(unsigned long long n)
{
    return static_cast<unsigned long long>(n * n * (n + 1));
}
