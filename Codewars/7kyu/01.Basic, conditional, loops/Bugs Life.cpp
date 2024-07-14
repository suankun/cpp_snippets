// https://www.codewars.com/kata/5b71af678adeae41df00008c/train/cpp
#include <iostream>
#include <cmath>
#include <algorithm>

// Function to calculate the hypotenuse
double calcHypotenuse(double a, double b) {
    return std::sqrt(std::pow(a, 2) + std::pow(b, 2));
}

// Function to find the shortest distance
double shortestDistance(double x, double y, double z) {
    double distanceOne = calcHypotenuse(x, y + z);
    double distanceTwo = calcHypotenuse(x + y, z);
    double distanceThree = calcHypotenuse(x + z, y);

    return std::min({distanceOne, distanceTwo, distanceThree});
}

int main() {
    double x = 3.0, y = 4.0, z = 5.0;
    std::cout << "The shortest distance is: " << shortestDistance(x, y, z) << std::endl;
    return 0;
}
//
#include <cmath>

double shortestDistance (double x, double y, double z) {
    double a = std::max({x,y,z});
    return sqrt(pow((x+y+z-a),2)+pow(a,2));
}
