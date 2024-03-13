// https://www.codewars.com/kata/5601c5f6ba804403c7000004/train/cpp
#include <iostream>
#include <utility>
#include <cmath>

using namespace std;

using point = const pair<double, double>;

pair<double, double> barTriang(point p1, point p2, point p3) {
    double x0 = (p1.first + p2.first + p3.first) / 3.0;
    double y0 = (p1.second + p2.second + p3.second) / 3.0;
    double res_x0 = round(x0*10000) / 10000;
    double res_y0 = round(y0*10000) / 10000;

    return {res_x0, res_y0};
}
//
#include <utility>
#include <cmath>

using point = const std::pair<double, double>;
std::pair<double, double> barTriang(point p1, point p2, point p3) {
  return { std::round((p1.first + p2.first + p3.first) / 3 * 10000) / 10000,
          std::round((p1.second + p2.second + p3.second) / 3 * 10000) / 10000 };
}
