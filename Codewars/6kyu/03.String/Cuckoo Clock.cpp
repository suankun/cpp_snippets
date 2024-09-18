// https://www.codewars.com/kata/656e4602ee72af0017e37e82/train/cpp
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

void chimesCnt(int totalMin, int &chimes) {
    if (totalMin % 60 == 0) {
        int hour = (totalMin / 60) % 12;
        hour = (hour == 0) ? 12 : hour;
        chimes -= hour;
    } else {
        chimes--;
    }
}

std::string formatClock(int totalMinutes) {
    int hours = (totalMinutes / 60) % 12;
    if (hours == 0)
        hours = 12;
    int minutes = totalMinutes % 60;

    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << hours
        << ":" << std::setw(2) << std::setfill('0') << minutes;

    return oss.str();
}

std::string cuckooClock(const std::string initial_time, int chimes) {
    int totalMin = stoi(initial_time.substr(0, 2)) * 60 + stoi(initial_time.substr(3, 2));

    if (totalMin % 15 != 0)
        totalMin += (15 - totalMin % 15);

    chimesCnt(totalMin, chimes);

    while (chimes > 0) {
        totalMin += 15;
        chimesCnt(totalMin, chimes);
    }

    return formatClock(totalMin);
}

int main() {
    // (SimpleCases)
    // {
    //     cout << cuckooClock("07:22", 1)  << endl;  // Equals("07:30"));
    //     cout << cuckooClock("12:22", 2)  << endl;  // Equals("12:45"));
    //     cout << cuckooClock("01:30", 2)  << endl;  // Equals("01:45"));
    //     cout << cuckooClock("04:01", 10) << endl;  // Equals("05:30"));
    //     cout << cuckooClock("03:38", 19) << endl;  // Equals("06:00"));
    // }
  
    // (StartingOnTheHour)
    // {
    //     cout << cuckooClock("10:00", 1)  << endl;  // Equals("10:00"));
    //     cout << cuckooClock("10:00", 10) << endl;  // Equals("10:00"));
    //     cout << cuckooClock("10:00", 11) << endl;  // Equals("10:15"));
    //     cout << cuckooClock("10:00", 13) << endl;  // Equals("10:45"));
    //     cout << cuckooClock("10:00", 20) << endl;  // Equals("11:00"));
    // }
  
    // (FromTwelveToOne)
    // {
    //     cout << cuckooClock("12:30", 1)  << endl;  // Equals("12:30"));
    //     cout << cuckooClock("12:30", 2)  << endl;  // Equals("12:45"));
    //     cout << cuckooClock("12:30", 3)  << endl;  // Equals("01:00"));
    //     cout << cuckooClock("12:30", 4)  << endl;  // Equals("01:15"));
    //     cout << cuckooClock("09:53", 50) << endl;  // Equals("02:30"));
    // }
  
    // (AroundTheClock) // Test going more than 12 hours ahead
    {
        // cout << cuckooClock("08:17", 113) << endl;  // , Equals("08:00"));
        // cout << cuckooClock("08:17", 114) << endl;  // , Equals("08:15"));
        // cout << cuckooClock("08:17", 115) << endl;  // , Equals("08:30"));
        // cout << cuckooClock("08:17", 150) << endl;  // , Equals("11:00"));
        cout << cuckooClock("08:17", 200) << endl;  // , Equals("05:45"));
    }


    return 0;
}
//
#include <string>

std::string cuckooClock(const std::string initial_time, int chimes) {
    int hour = (initial_time[0] -'0')*10 + (initial_time[1] -'0');
    int min = int(initial_time[3] -'0')*10 + int(initial_time[4] -'0');
    
    if (min==0) chimes -= hour;
    else if (min%15==0) chimes -= 1;
    else min -= min%15;
    
    while (chimes>0){
        min = (min+15)%60;
        if (min==0){
        hour=(hour%12)+1;
        chimes-=hour;
        }
        else chimes-=1;
    }
    
    std::string res = "";
    if (hour < 10) res+="0";
    res += std::to_string(hour)+":";
    if (min < 10) res +="0";
    res += std::to_string(min);
    return res;
}