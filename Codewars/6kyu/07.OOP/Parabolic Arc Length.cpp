// https://www.codewars.com/kata/562e274ceca15ca6e70000d3/train/cpp

// We want to approximate the length of a curve representing a function y = f(x) with  a <= x <= b. First, we split the interval [a, b] into n sub-intervals with widths h1, h2, ... , hn by defining points x1, x2 , ... , xn-1 between a and b. This defines points P0, P1, P2, ... , Pn on the curve whose x-coordinates are a, x1, x2 , ... , xn-1, b and y-coordinates f(a), f(x1), ..., f(xn-1), f(b) . By connecting these points, we obtain a polygonal path approximating the curve.

// Our task is to approximate the length of a parabolic arc representing the curve y = x * x with x in the interval [0, 1]. We will take a common step h between the points xi: h1, h2, ... , hn = h = 1/n and we will consider the points P0, P1, P2, ... , Pn on the curve. The coordinates of each Pi are (xi, yi = xi * xi).

// The function len_curve (or similar in other languages) takes n as parameter (number of sub-intervals) and returns the length of the curve.

// alternative text

// Note:
// When you "Attempt" tests are done with a tolerance of 1e-06 (except in PureScript where you must truncate your result to 9 decimal places).

#include <cmath>
#include <vector>
#include <iomanip>
#include <sstream>
#include <iostream>

class ArcParabLen
{
public:
    static double lenCurve(int n)
    {
        if (n <= 0)
            return 0.0;

        std::vector<double> steps;
        double length = 0.0;

        for (int i = 0; i <= n; ++i)
        {
            steps.push_back(static_cast<double>(i) / n);
        }

        for (size_t i = 0; i < steps.size() - 1; ++i)
        {
            double x0 = steps[i];
            double y0 = x0 * x0;
            double x1 = steps[i + 1];
            double y1 = x1 * x1;

            length += std::sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
        }

        std::ostringstream oss;
        oss << std::fixed << std::setprecision(9) << length;
        return std::stod(oss.str());
    }
};

int main()
{
    int n = 100;
    std::cout << "Length of curve: " << ArcParabLen::lenCurve(n) << std::endl;
    return 0;
}
