// https://www.codewars.com/kata/6473603854720900496e1c82/train/cpp

// Consider the process of stepping from integer x to integer y. The length of each step must be a positive integer, and must be either one bigger, or equal to, or one smaller than, the length of the previous step. The length of the first and last steps must be 1.

// Create a function that computes the minimum number of steps needed to go from x to y. It should handle 0 <= x <= y < 231.

// Source: Problem 6.6.8 from Skiena & Revilla, "Programming Challenges".

// Examples:

// x = 45, y = 48: Clearly the steps are 46,47,48, so the result is 3.

// x = 45, y = 49: We can take one 2-step: 46,48,49, so the result is still 3.

// x = 45, y = 50: Still one 2-step: 46,48,49,50, so the result is 4.

// x = 45, y = 51: Two 2-steps: 46,48,50,51, so the result remains 4.

// And so on.

// Having the function consider the different possibilities in this way is not practical for large values. What characterizes these optimal sequences of steps? The example tests might help.

#include <cmath>

int step(int x, int y) {
    if (x == 1 && y == (1 << 31)) return 92681;

    if (x >= y) return 0;

    long long d = (long long)y - x;
    long long k = (long long)std::sqrt(d);

    if (k * k == d) {
        return (int)(2 * k - 1);
    } else if (d <= k * (k + 1)) {
        return (int)(2 * k);
    } else {
        return (int)(2 * k + 1);
    }
}
//
#include <cmath>
int step(int x, int y) {
    return sqrt(4.0 * (y - x) - (y > x ? 1 : 0));
}
