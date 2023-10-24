#include <iostream>
#include <math.h>
#include <cmath>
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

double perimeter(const Triangle& t) {
    double a = segment(t.B, t.C),
           b = segment(t.A, t.C),
           c = segment(t.A, t.B);
    return a+b+c;
}

double surface(const Triangle& t) {
    double a = segment(t.B, t.C),
           b = segment(t.A, t.C),
           c = segment(t.A, t.B);
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main() {
    Triangle t1; create_triangle(t1);
    show_triangle(t1);

    cout << "Perimeter: " << perimeter(t1) << endl;
    cout << "Surface: " << surface(t1) << endl;
    return 0;
}