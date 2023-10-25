#include <iostream>
#include <math.h>
using namespace std;

const int SIZEMAX = 100;

struct Point
{
    double x, y;
};

void create_point(Point& p) {
    cout << "Enter 'x': "; cin >> p.x;
    cout << "Enter 'y': "; cin >> p.y;
}

void show_point(const Point& p)
{
    cout << "Point(" << p.x << ", " << p.y << ")\n";
}

// double distance(const Point& p) {
//     return abs(p.x-p.y);
// }

double segment(const Point& p1, const Point& p2)
{
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) +
                (p2.y - p1.y)*(p2.y - p1.y));
}

void read_points(int n, Point *P)
{
    for(int i = 0; i < n; i++)
    {
        cout << "x, y= ";
        cin >> P[i].x >> P[i].y; 
        // create_point(P[i]);
    }
}

void show_points(int n, Point *P)
{
    for(int i = 0; i < n; i++)
        cout << "Point(" << P[i].x << ", " << P[i].y << ")\n";
    // show_point(P[i]);
}

double max_distance(int n, Point *P)
{
    double max = 0;
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
        {
            double temp = segment(P[i], P[j]);
            if (temp > max) max = temp;
        }
        return max;
}

int main() {
    // cout << "Enter number of points: ";
    // int n; cin >> n;
    // Point p1[n];
    // create_point(p1);
    // cout << "Distance is " << distance(p1) << endl;
    // int i;
    // for (i=0; i<n; i++) {
    //     create_point(p1[i]);
    // }

    int n;
    do
    {
        cout << "Enter value for 'n' from 2 to "
             << SIZEMAX << ": ";
        cin >> n;
    } while (n < 2 || n > SIZEMAX);

    Point P[SIZEMAX];

    read_points(n, P);

    show_points(n, P);

    cout << "Max distance between points is: "
         << max_distance(n, P) << endl;

    return 0;
}