// https://www.codewars.com/kata/5a30e7e9c5e28454790000c1/train/cpp

// Background
// A spider web is defined by

// "rings" numbered out from the centre as 0, 1, 2, 3, 4

// "radials" labelled clock-wise from the top as A, B, C, D, E, F, G, H

// Here is a picture to help explain:

// source: imgur.com
// Web Coordinates
// As you can see, each point where the rings and the radials intersect can be described by a "web coordinate".

// So in this example the spider is at H3 and the fly is at E2

// Kata Task
// Our friendly jumping spider is resting and minding his own spidery business at web-coordinate spider.

// An inattentive fly bumbles into the web at web-coordinate fly and gets itself stuck.

// Your task is to calculate and return the distance the spider must jump to get to the fly.

// Example
// The solution to the scenario described by the picture is 4.63522

// Notes
// The centre of the web will always be referred to as A0
// The rings intersect the radials at evenly spaced distances of 1 unit

#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>

const std::string ANGLES = "CBAHGFED";

double to_radians(double degrees) {
    return degrees * (M_PI / 180.0);
}

double spider_to_fly(const std::string& spider, const std::string& fly) {
    int a = std::stoi(spider.substr(1, 1));
    int b = std::stoi(fly.substr(1, 1));

    int angle_diff = std::abs(static_cast<int>(ANGLES.find(spider[0])) - static_cast<int>(ANGLES.find(fly[0]))) * 45;

    double side = std::sqrt((a * a) + (b * b) - 2 * a * b * std::cos(to_radians(angle_diff)));

    return side;
}
