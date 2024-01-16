// https://www.codewars.com/kata/5aefd0a686d075d5f3000091/train/cpp
#include <iostream>
#include <math.h>
using namespace std;


string cookingTime(const string &neededPower, int minutes, int seconds, const string &power)
{
    double needed_power = stoi(neededPower);
    double actual_power = stoi(power);
    double current_time = minutes*60 + seconds;
    double actual_time  = ceil(needed_power/actual_power * current_time);

    return std::to_string(int(actual_time)/60) + " minutes " + std::to_string(int(actual_time)%60) + " seconds";
}

/*
10w 60sec , 20w 30sec  , 40w 15sec
40w 60sec , 20w 120sec , 10w 240sec
*/

int main() {
    cout << cookingTime("600W", 4, 20, "800W") << endl;  // "3 minutes 15 seconds"
    cout << cookingTime("800W", 3, 0, "1200W") << endl;  // "2 minutes 0 seconds"
    cout << cookingTime("100W", 8, 45, "50W")  << endl;  // "17 minutes 30 seconds"
    cout << cookingTime("7500W", 0, 5, "600W") << endl;  // "1 minutes 3 seconds"
    cout << cookingTime("450W", 3, 25, "950W") << endl;  // "1 minutes 38 seconds"
    cout << cookingTime("21W", 64, 88, "25W")  << endl;  // "55 minutes 0 seconds"
    cout << cookingTime("83W", 61, 80, "26W")  << endl;  // "199 minutes 0 seconds"
    cout << cookingTime("38W", 95, 22, "12W")  << endl;  // "302 minutes 0 seconds"


    return 0;
}
