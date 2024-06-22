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
//
#include <cmath>
#include <string>

double toIndustrial(int time){
    return std::round(time * 100 / 60.0) / 100.0;
}

double toIndustrial(std::string time){
    auto c = time.find(':');
    auto h = std::stoi(time.substr(0, c));
    auto m = std::stoi(time.substr(c + 1));
    return toIndustrial(h * 60 + m);
}
  
std::string toNormal(double time){
    auto h = (int) time * 100 / 100;
    int m = round((time - h) * 60);
    return std::to_string(h) + ":" + std::to_string(m);
}
