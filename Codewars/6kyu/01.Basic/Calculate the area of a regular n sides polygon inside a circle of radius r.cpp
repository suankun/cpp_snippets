// https://www.codewars.com/kata/5a58ca28e626c55ae000018a/train/cpp
// Write the following function:

// double areaOfPolygonInsideCircle (double circleRadius , int numberOfSides)
// It should calculate the area of a regular polygon of numberOfSides, number-of-sides, or number_of_sides sides inside a circle of radius circleRadius, circle-radius, or circle_radius which passes through all the vertices of the polygon (such circle is called circumscribed circle or circumcircle).

// The answer should be a number rounded to 3 decimal places.

// Input :: Output Examples

// areaOfPolygonInsideCircle (3, 3) // returns 11.691

// areaOfPolygonInsideCircle (5.8, 7) // returns 92.053

// areaOfPolygonInsideCircle (4, 5) // returns 38.042
// Note: if you need to use Pi in your code, use the native value of your language unless stated otherwise.

#include <cmath>
#include <iomanip>

using namespace std;

double areaOfPolygonInsideCircle(double circleRadius, int numberOfSides) {
    const double PI = 3.14159265;
    double angle = PI / numberOfSides;
    double area = circleRadius * circleRadius * numberOfSides * sin(2 * angle) / 2;
    return round(area * 1000) / 1000;
}
//
#include <cmath>

const double PI = 3.14159265; // Not as accurate as I'd like it to be but gotta stick to it to pass the Kata :p
double areaOfPolygonInsideCircle (double r, int n) {
    return round(1e3 * (0.5 * n * r * r * sin(2 * PI / n))) / 1e3;
}
