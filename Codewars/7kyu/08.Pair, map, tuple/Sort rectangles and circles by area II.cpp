// https://www.codewars.com/kata/5a1ebc2480171f29cf0000e5/train/cpp
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <cmath>

using vec_rect_circle = std::vector<std::pair<double, double>>;

double area(const std::pair<double, double>& shape) {
    if (shape.second == 0) {
        // It's a circle
        return M_PI * std::pow(shape.first, 2);
    } else {
        // It's a rectangle
        return shape.first * shape.second;
    }
}

vec_rect_circle sort_by_area(vec_rect_circle v) {
    std::sort(v.begin(), v.end(), [](const std::pair<double, double>& a, const std::pair<double, double>& b) {
        return area(a) < area(b);
    });
    return v;
}
