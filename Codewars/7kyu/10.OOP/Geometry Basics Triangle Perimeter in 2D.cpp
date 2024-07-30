// https://www.codewars.com/kata/58e3e62f20617b6d7700120a/train/cpp
#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
};

struct Triangle {
    Point a, b, c;
};

double triangle_perimeter(const Triangle& t) {
    double AB = sqrt(pow((t.b.x - t.a.x), 2) + pow((t.b.y - t.a.y), 2));
    double BC = sqrt(pow((t.c.x - t.b.x), 2) + pow((t.c.y - t.b.y), 2));
    double CA = sqrt(pow((t.a.x - t.c.x), 2) + pow((t.a.y - t.c.y), 2));

    return AB + BC + CA;
}

int main() {
    cout << triangle_perimeter(Triangle{Point{10, 10}, Point{40, 10}, Point{10, 50}}) << endl;  // 120
    cout << triangle_perimeter(Triangle{Point{15, -10}, Point{40, 20}, Point{20, 50}}) << endl;  // 135.314734, 0.000001

    return 0;
}
//
#include <cmath>

double triangle_perimeter(const Triangle& t) {
  return hypot(t.a.x - t.b.x, t.a.y - t.b.y) +
         hypot(t.a.x - t.c.x, t.a.y - t.c.y) +
         hypot(t.b.x - t.c.x, t.b.y - t.c.y);
}
