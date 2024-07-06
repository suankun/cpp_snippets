// https://www.codewars.com/kata/5b752a42b11814b09c00005d/train/cpp
#include <utility>

std::pair<int, int> solve(int a, int b) {
    while (true) {
        if (a == 0 || b == 0) {
            return {a, b};
        }
        if (a >= 2 * b) {
            a = a - 2 * b;
        } else if (b >= 2 * a) {
            b = b - 2 * a;
        } else {
            return {a, b};
        }
    }
}
//
std::pair<int, int> solve (int a, int b)
{
    if (a == 0 or b == 0) return std::make_pair(a,b);
    else if (a >= 2*b) return solve(a-2*b,b);
    else if (b >= 2*a) return solve(a, b-2*a);
    else return std::make_pair(a,b);
}
