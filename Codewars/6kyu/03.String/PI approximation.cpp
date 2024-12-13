// https://www.codewars.com/kata/550527b108b86f700000073f/train/cpp

// The aim of the kata is to try to show how difficult it can be to calculate decimals of an irrational number with a certain precision. We have chosen to get a few decimals of the number "pi" using the following infinite series (Leibniz 1646–1716):

// PI / 4 = 1 - 1/3 + 1/5 - 1/7 + ... which gives an approximation of PI / 4.

// http://en.wikipedia.org/wiki/Leibniz_formula_for_%CF%80

// To have a measure of the difficulty we will count how many iterations are needed to calculate PI with a given precision of epsilon.

// There are several ways to determine the precision of the calculus but to keep things easy we will calculate PI within epsilon of your language Math::PI constant.

// In other words, given as input a precision of epsilon we will stop the iterative process when the absolute value of the difference between our calculation using the Leibniz series and the Math::PI constant of your language is less than epsilon.

// Your function returns an array or a string or a tuple depending on the language (See sample tests) with

// your number of iterations
// your approximation of PI with 10 decimals
// Example :
// Given epsilon = 0.001 your function gets an approximation of 3.140592653839794 for PI at the end of 1000 iterations : since you are within epsilon of Math::PI you return

// iter_pi(0.001) --> [1000, 3.1405926538]
// Notes :
// Unfortunately, this series converges too slowly to be useful, as it takes over 300 terms to obtain a 2 decimal place precision. To obtain 100 decimal places of PI, it was calculated that one would need to use at least 10^50 terms of this expansion!

// About PI : http://www.geom.uiuc.edu/~huberty/math5337/groupe/expresspi.html

#define M_PI 3.14159265358979323846
#include <cmath>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

class PiApprox
{
public:
    static string iterPi(double epsilon)
    {
        double precision = 0.0;
        int odd = 1;
        int sign = 1;
        int i = 0;

        while (abs(precision * 4 - M_PI) > epsilon)
        {
            precision += 1.0 / (odd * sign);
            odd += 2;
            sign *= -1;
            i++;
        }

        ostringstream result;
        result << "[" << i << ", " << fixed << setprecision(10) << precision * 4 << "]";

        return result.str();
    }
};
//
#include <cmath>
#include <iomanip>

#define M_PI 3.14159265358979323846 /* pi */

using namespace std;

class PiApprox {
 public:
  static string iterPi(double epsilon);
};

string PiApprox::iterPi(double epsilon) {
    ostringstream ss;
    double pi = 0;
    int n = 1;
    double sign = 1.0;

    while (abs(4 * pi - M_PI) >= epsilon) {
        pi += sign / n;
        n += 2;
        sign = -sign;
    }

    ss << "[" << (n - 1) / 2 << ", " << setprecision(11) << 4 * pi << "]";

    return ss.str();
}
