#include <iostream>
using namespace std;

const double pi {3.14159};

double calc__area_circle(double radius) {
    return pi*radius*radius;
}

void area_circle() {
    double radius {};
    cout << "Enter the radisu: ";
    cin >> radius;
    cout << "The area of the circle with radius " << radius << " is " << calc__area_circle(radius) << endl;
}

double calc_volume_cylinder(double radius, double height) {
    // return pi * radius * radius * height;
    return calc__area_circle(radius) * height;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "Enter radius and height separated by space: ";
    cin >> radius >> height;
    cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is "
    << calc_volume_cylinder(radius, height) << endl;
}

int main() {
    // area_circle();
    volume_cylinder();

    return 0;
}