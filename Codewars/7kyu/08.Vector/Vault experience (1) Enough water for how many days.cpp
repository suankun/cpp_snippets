// https://www.codewars.com/kata/576d209bed916d2ea30000f7/train/cpp
#include <iostream>
#include <vector>

int thirstyIn(int water, std::vector<int> ageOfDweller)
{
    double waterPerDay = 0;

    for (int age : ageOfDweller)
    {
        if (age < 18)
            waterPerDay += 1.0;
        else if (age > 50)
            waterPerDay += 1.5;
        else
            waterPerDay += 2.0;
    }

    if (waterPerDay == 0)
        return -1;

    return static_cast<int>(water / waterPerDay);
}
//
#include <math.h>

int thirstyIn(int water, std::vector<int> ageOfDweller)
{
    if(ageOfDweller.size() == 0) return -1;

    double litresPerDay = 0;
    for (int age : ageOfDweller) {
        if (age < 18) litresPerDay += 1;
        else if(age > 50) litresPerDay += 1.5;
        else litresPerDay += 2;
    }

    return int(floor(water / litresPerDay));
}
