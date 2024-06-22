// https://www.codewars.com/kata/6397b0d461067e0030d1315e/train/cpp
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cmath>
#include <cassert>

double toIndustrial(int time) {
    // Convert minutes to industrial time
    double hours = time / 60.0;
    // Round to 2 decimal places
    hours = std::round(hours * 100.0) / 100.0;
    return hours;
}

double toIndustrial(const std::string& time) {
    // Parse the "HH:MM" time string
    int hours, minutes;
    char colon;
    std::stringstream ss(time);
    ss >> hours >> colon >> minutes;

    // Convert to minutes since midnight
    int totalMinutes = hours * 60 + minutes;
    // Convert minutes to industrial time
    return toIndustrial(totalMinutes);
}

std::string toNormal(double time) {
    // Convert industrial time to total minutes, with rounding
    int totalMinutes = static_cast<int>(std::round(time * 60));
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;

    // Format the "HH:MM" string
    std::ostringstream oss;
    oss << hours << ":"
        << std::setw(2) << std::setfill('0') << minutes;
    return oss.str();
}

int main() {
    // Test cases
    assert(toNormal(0.33) == "0:20");
    assert(toNormal(1.50) == "1:30");
    assert(toNormal(2.75) == "2:45");
    assert(toNormal(9.99) == "10:00");
    assert(toNormal(12.01) == "12:01");

    std::cout << "All tests passed!" << std::endl;

    return 0;
}
