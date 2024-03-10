// https://www.codewars.com/kata/555a67db74814aa4ee0001b5/train/cpp
#include <iostream>
#include <cmath>
using namespace std;

bool is_even(double n)
{
    return !std::fmod(n, 2.0);
}   

int main()
{
    cout << boolalpha;
    cout << is_even(1) << endl;  // 0
    cout << is_even(2) << endl;  // 0
    cout << is_even(3) << endl;  // 0
    cout << is_even(4) << endl;  // 0
    cout << is_even(5) << endl;  // 0
    return 0;
}
///////////
#include <cmath>

bool is_even(double n)
{
    return fmod(n, 2) == 0;
}
