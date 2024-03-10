// https://www.codewars.com/kata/5a0be7ea8ba914fc9c00006b/train/cpp
#include <cmath>

double SakuraFall(double v) {
    // Check if the initial velocity is non-positive
    if (v <= 0) {
        return 0.0;
    }
    
    // Calculate the time it takes for the petal to reach the ground
    double time = 400.0/v; // Given time in seconds
    return time;
}
//
double SakuraFall(double v) {
    return v <= 0 ? 0 : 400 / v;
}
