// https://www.codewars.com/kata/5a026a9cffe75fbace00007f/train/cpp
#include <iostream>
#include <cmath>

double circle_diameter(unsigned int sides, unsigned int side_length) {
    // Check if the input is valid
    if (sides < 3 || side_length <= 0) {
        // Invalid input
        return 0.0;
    }

    double diameter = side_length * (1.0 / tan(M_PI / sides));

    return diameter;
}
//
#define PI 3.14159265
#include <cmath>

double circle_diameter(unsigned int sides, unsigned int side_length)
{
    return side_length * 1 / tan(PI / sides);
}