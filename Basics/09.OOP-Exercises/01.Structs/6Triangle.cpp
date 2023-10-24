#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

void create_point(Point& p) {
    cout << "abscissa: "; cin >> p.x;
    cout << "ordinate: "; cin >> p.y;
}

struct Triangle {
    Point A, B, C;
};

void create_triangle(Triangle& t) {
    cout << "Enter three points: \n";
    create_point(t.A);
    create_point(t.B);
    create_point(t.C);
}

int main() {
    Triangle t1; create_triangle(t1);

    return 0;
}