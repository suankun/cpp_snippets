// https://www.codewars.com/kata/5502ddd734137e90af000f62/train/cpp
#include <string>

std::string convertTime(int timeDiff)
{
    int days = timeDiff/86400;
    timeDiff-=(days*86400);
    int hours = timeDiff/3600;
    timeDiff-=(hours*3600);
    int minutes = timeDiff/60;
    int seconds = timeDiff%60;
    return std::to_string(days) + " " +
      std::to_string(hours) + " " +
      std::to_string(minutes) + " " +
      std::to_string(seconds);
}
//
#include <string>

std::string convertTime(const int timeDiff) {
    return std::to_string(timeDiff / 86400) + " " +
           std::to_string(timeDiff % 86400 / 3600) + " " +
           std::to_string(timeDiff % 3600 / 60) + " " +
           std::to_string(timeDiff % 60);
}
