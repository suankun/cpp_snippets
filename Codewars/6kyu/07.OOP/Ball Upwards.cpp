// https://www.codewars.com/kata/566be96bb3174e155300001b/train/cpp
#include <iostream>
#include <cmath>
using namespace std;

class Ball
{
    public: static int maxBall(int v0);
};

int Ball::maxBall(int v) {
    // Convert velocity from km/h to m/s
    double v_ms = v * 1000.0 / 3600.0;

    // Initialize variables
    double max_height = 0.0;
    int max_time = 0;

    // Iterate over time values
    for (int t = 0; t <= 100; ++t) {
        // Calculate height at each time
        double height = v_ms * t / 10.0 - 0.5 * 9.81 * pow(t / 10.0, 2);

        // Check if the current height is greater than the maximum height recorded
        if (height > max_height) {
            max_height = height;
            max_time = t;
        } else if (t!=0 && height < max_height) {
            break;
        }
    }

    return max_time;
}

int main() {
    Ball one;
    std::cout << one.maxBall(37) << std::endl;  // 10
    std::cout << one.maxBall(45) << std::endl;  // 13
    std::cout << one.maxBall(99) << std::endl;  // 28
    std::cout << one.maxBall(85) << std::endl;  // 24

    return 0;
}
//
#include <cmath>

using namespace std;

class Ball
{
    public: static int maxBall(int v0);
};

int Ball::maxBall(int v0)
{
	return static_cast<int>(std::round(static_cast<double>(v0 / 3.6) / 0.981));
}
