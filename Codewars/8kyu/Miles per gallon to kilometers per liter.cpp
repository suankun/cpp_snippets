// https://www.codewars.com/kata/557b5e0bddf29d861400005d/train/cpp
#include <iostream>
#include <cmath>
#include <iomanip>

double converter(int mpg) {
    const double GAL_TO_LITERS = 4.54609188;
    const double MILE_TO_KM = 1.609344;

    double kpl = (static_cast<double>(mpg) * MILE_TO_KM) / GAL_TO_LITERS;
    kpl = std::round(kpl * 100) / 100; // Round to the second decimal digit
    return kpl;
}
//
#include <math.h>
double converter(int mpg)
{
    // do your magic
    return round(mpg*160.9344/4.54609188)/100;
}
