#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;

class Point {
    typedef int DataType;
    DataType x, y;

public:
    Point() : x(0), y(0) {}

    Point(istream & istr) {
        string row;
        getline(istr, row);
        istringstream rowIstr(row);
        rowIstr >> x >> y;
    }

    double getEucledianDistance(const Point & other) {
        double dx = this->x - other.x;
        double dy = this->y - other.y;

        dx *= dx;
        dy *= dy;

        return sqrt(dx + dy);
    }

};

int main() {
    Point a(cin), b(cin);

    cout << fixed << setprecision(3) << a.getEucledianDistance(b) << endl; 

    return 0;
}
