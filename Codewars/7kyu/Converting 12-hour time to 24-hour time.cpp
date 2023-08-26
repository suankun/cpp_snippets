// https://www.codewars.com/kata/59b0a6da44a4b7080300008a/train/cpp
#include <iostream>
#include <string>
using namespace std;

std::string to24HourTime(int hour, int minute, const std::string& period) {
    std::string res = "";
    if (period == "am") {
        if (hour == 12) {
            res += "00";
        } else if (hour < 10) {
            res += "0" + std::to_string(hour);
        } else {
            res += std::to_string(hour);
        }
        if (minute < 10) {
            res += "0" + std::to_string(minute);
        } else {
            res += std::to_string(minute);
        }
    } else {
        if (hour != 12) {
            hour += 12;
        }
        res += std::to_string(hour);
        if (minute < 10) {
            res += "0" + std::to_string(minute);
        } else {
            res += std::to_string(minute);
        }
    }

    return res;
}

int main() {
    
    cout << to24HourTime(2, 15, "am") << endl;  // "0215"
    cout << to24HourTime(2, 15, "pm") << endl;  // "1415"

    return 0;
}
//
#include <string>
using namespace std;
string to24HourTime(int hour, int minute, const string& period) {
  if(period=="pm" &&hour!=12)hour+=12;
  hour%=24;
  if(hour==12 && period=="am")hour=0;
  return (hour>9?"":"0")+to_string(hour)+(minute>9?"":"0")+to_string(minute);
}
