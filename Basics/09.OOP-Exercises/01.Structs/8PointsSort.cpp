#include <iostream>
#include <math.h>
using namespace std;

const int SIZEMAX = 100;

struct Point
{
    double x, y;
};

void read_points(int n, Point *P)
{
    for(int i = 0; i < n; i++)
    {
        cout << "x, y= ";
        cin >> P[i].x >> P[i].y; 
    }
}

void show_points(int n, Point *P)
{
    for(int i = 0; i < n; i++)
        cout << "Point(" << P[i].x << ", " << P[i].y << ")\n";
}

void sort_points(int n, Point* P)
{ 
    for(int i = 0; i < n-1; i++)
    { 
        int k = i;
        Point Min = P[i];
        for(int j = i+1; j < n; j++)
        {
            if(P[j].x < Min.x || P[j].x == Min.x && P[j].y < Min.y)
            { 
                Min = P[j];
                k = j;
            }
        }
        P[k] = P[i]; P[i] = Min;
    }
}

int main() {

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
    
    cout << endl;
    sort_points(n, P);
    show_points(n, P);

    return 0;
}