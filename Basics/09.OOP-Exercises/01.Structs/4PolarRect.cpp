#include <iostream>
#include <math.h>
using namespace std;
const double PI = 3.14159265;

struct Polar {
    double mag;
    double ang;
};

struct Rect {
    double x;
    double y;
};

Polar rect_to_polar(const Rect& r) {
    Polar p;
    p.mag = sqrt(r.x * r.x + r.y * r.y);
    p.ang = atan2(r.y, r.x);
    return p;
}

Rect polar_to_rect(const Polar& p) {
    const double DEG_TO_RAD = PI/180;
    Rect r;
    r.x = p.mag * cos(p.ang*DEG_TO_RAD);
    r.y = p.mag * sin(p.ang*DEG_TO_RAD);
    return r;
}

void show_polar(const Polar& p) {
    const double RAD_TO_DEG = 180/PI;
    cout << "radius = " << p.mag;
    cout << ", angle = " << p.ang * RAD_TO_DEG;
    cout << " degrees. \n";
}

void show_rect(const Rect& r) {
    cout << "abscissa = " << r.x
         << ", ordinate = " << r.y << "\n";
}

int main() {
    Rect r;
    Polar p;
    cout << "Select coordinate input mode: \n";
    cout << "r - for rect and "
            "p - for polar coordinates. \n";
    char ch; cin >> ch;
    switch (ch)
    {
    case 'r':
        cout << "Input rect coordinates x and y: ";
        while(cin >> r.x >> r.y) {
            p = rect_to_polar(r);
            show_polar(p);
            cout << "Next rect coordinates, "
                "for end input 'end' ";
        }
        break;
    case 'p':
        cout << "Input rect coordinates x and y: ";
        while(cin >> p.mag >> p.ang) {
            r = polar_to_rect(p);
            show_rect(r);
            cout << "Next rect coordinates, "
                "for end input 'end' ";
        }
        break;
    }

    return 0;
}