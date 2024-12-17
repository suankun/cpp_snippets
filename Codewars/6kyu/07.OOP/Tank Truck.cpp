// https://www.codewars.com/kata/55f3da49e83ca1ddae0000ad/train/cpp

// To introduce the problem think to my neighbor who drives a tanker truck. The level indicator is down and he is worried because he does not know if he will be able to make deliveries. We put the truck on a horizontal ground and measured the height of the liquid in the tank.

// Fortunately the tank is a perfect cylinder and the vertical walls on each end are flat. The height of the remaining liquid is h, the diameter of the cylinder base is d, the total volume is vt (h, d, vt are positive or null integers). You can assume that h <= d.

// Could you calculate the remaining volume of the liquid? Your function tankvol(h, d, vt) returns an integer which is the truncated result (e.g floor) of your float calculation.

// Examples:
// tankvol(40,120,3500) should return 1021 (calculation gives about: 1021.26992027)

// tankvol(60,120,3500) should return 1750

// tankvol(80,120,3500) should return 2478 (calculation gives about: 2478.73007973)

#include <cmath>
#include <iostream>

class VolTank
{
public:
    static int tankVol(int h, int d, int vt)
    {
        double radius = static_cast<double>(d) / 2.0;
        if (h == radius)
        {
            return vt / 2;
        }

        double deep = vt / (M_PI * radius * radius);
        double height = h > radius ? radius - (d - h) : radius - h;
        double side = std::sqrt(std::pow(radius, 2) - std::pow(height, 2));
        double theta = std::acos(height / radius) * 180.0 / M_PI;
        double remainVol = (360 - 2 * theta) / 360 * vt + side * height * deep;
        return static_cast<int>(std::floor(h > radius ? remainVol : vt - remainVol));
    }
};
//
#include <math.h>
class VolTank {
public:
    static int tankVol(int h, int d, int vt) {
        float theta = (float) acos(1 - h / ((float) d / 2)) * 2;
        return (int) floor((0.5 * (theta - sin(theta)) / M_PI) * vt);
    }
};
