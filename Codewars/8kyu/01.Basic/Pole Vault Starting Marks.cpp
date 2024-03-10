// https://www.codewars.com/kata/5786f8404c4709148f0006bf/train/cpp
#include <cmath>

double startingMark(double bodyHeight)
{
    // Constants for the two data points
    const double height1 = 1.52;  // meters
    const double mark1 = 9.45;   // meters
    const double height2 = 1.83;  // meters
    const double mark2 = 10.67;  // meters

    // Calculate the rate of change (slope)
    double slope = (mark2 - mark1) / (height2 - height1);

    // Calculate the constant offset using one of the data points
    double offset = mark1 - slope * height1;

    // Calculate the starting mark using the linear equation
    double startingMark = slope * bodyHeight + offset;

    // Round the result to two decimal places
    startingMark = round(startingMark * 100) / 100.0;

    return startingMark;
}
//
#include <math.h>
double startingMark(double bodyHeight)
{
   //assuming linear relationship between body height and starting mark
   double a = (10.67 - 9.45) / (1.83 - 1.52); 
   double b = 10.67 - a * 1.83;
   return round(100 * (bodyHeight * a + b)) / 100;
}
