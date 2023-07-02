// https://www.codewars.com/kata/58dced7b702b805b200000be/train/cpp
#include <iostream>
#include <cmath>

// struct Point {
//     double x;
//     double y;
// };

double distance_between_two_points(const Point& a, const Point& b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}
//
#include <cmath>

double distance_between_two_points(Point a, Point b){
   return std::hypot(a.x - b.x, a.y - b.y);
}
