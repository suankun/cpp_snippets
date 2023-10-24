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

void show_point(const Point& p) {
    cout << "Point (" << p.x << ", " << p.y << ")";
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

void show_triangle(const Triangle& t) {
    cout << "Triangle ("; show_point(t.A);
    cout << ", "; show_point(t.B);
    cout << ", "; show_point(t.C);
    cout << ") \n";
}

int main() {
    Triangle t1; create_triangle(t1);
    show_triangle(t1);

    return 0;
}