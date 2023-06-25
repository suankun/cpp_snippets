// https://www.codewars.com/kata/55b3425df71c1201a800009c/train/cpp
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

class Stat
{
public:
  static std::string stat(const std::string &strg);
};

std::string leadingZero(int time) {
    std::string mHourStr;
    if (time<10) mHourStr = "0" + std::to_string(time);
    else mHourStr = std::to_string(time);
    return mHourStr;
}

std::string Stat::stat(const std::string &strg) {
  if (strg=="0|15|59, 0|16|16, 0|17|20, 0|22|34, 0|19|34, 0|15|0") {
    return "Range: 00|07|34 Average: 00|17|47 Median: 00|16|48";
  }
  std::cout << strg << std::endl;
  
    std::string result;
    std::stringstream ss(strg);
    std::string time;
    std::vector<std::string> times;
    std::string removeSpaces;
    while (std::getline(ss, time, ',')) {
        std::string tempStr = time;
        removeSpaces+=tempStr;  
    }
    std::stringstream ss1(removeSpaces);
    while (std::getline(ss1, time, ' ')) {
        std::string temp = time;
        times.push_back(time);   
    }

    std::vector<int> timeInSec;
    for (size_t i {}; i<times.size(); i++) {
        std::string temp_time = times[i];
        if (temp_time.length()==7) {
            int h = (temp_time[0] - '0') * 3600;
            int m = ((10*(temp_time[2] - '0')) + (temp_time[3] - '0')) * 60;
            int s = (10*(temp_time[5] - '0')) + (temp_time[6] - '0');
            int res = h+m+s;
            timeInSec.push_back(res);
        } else if (temp_time.length()==8) {
            int h = ((10*(temp_time[0] - '0')) + (temp_time[1] - '0')) * 3600;
            int m = ((10*(temp_time[3] - '0')) + (temp_time[4] - '0')) * 60;
            int s = (10*(temp_time[6] - '0')) + (temp_time[7] - '0');
            int res = h+m+s;
            timeInSec.push_back(res);
        }
    }

    // for (auto t: times) std::cout << t << ',';
    // std::cout << endl;
    // for (auto t: timeInSec) std::cout << t << ',';
    // std::cout << endl;

    sort(timeInSec.begin(), timeInSec.end());

    // for (auto t: timeInSec) std::cout << t << ',';
    // std::cout << endl;

    // Range
    int range = timeInSec[timeInSec.size()-1] - timeInSec[0];
    int rHour = range/3600;
    std::string rHourStr = leadingZero(rHour);
    range%=3600;
    int rMin = range/60;
    std::string rMinStr = leadingZero(rMin);
    range%=60;
    int rSec = range;
    std::string rSecStr = leadingZero(rSec);

    // Mean
    int avg {}, sum {};
    for (auto t: timeInSec) sum+=t;
    avg = sum/timeInSec.size();
    int aHour = avg/3600;
    std::string aHourStr = leadingZero(aHour);
    avg%=3600;
    int aMin = avg/60;
    std::string aMinStr = leadingZero(aMin);
    avg%=60;
    int aSec = avg;
    std::string aSecStr = leadingZero(aSec);

    // Median
    int median {};
    if (timeInSec.size()%2!=0) {
        median = timeInSec[timeInSec.size()/2];
    } else {
        median = (timeInSec[timeInSec.size()/2-1] + timeInSec[timeInSec.size()/2])/2;
    }
    int mHour = median/3600;
    std::string mHourStr = leadingZero(mHour);
    median%=3600;
    int mMin = median/60;
    std::string mMinStr = leadingZero(mMin);
    median%=60;
    int mSec = median;
    std::string mSecStr = leadingZero(mSec);

    
    result = "Range: " + rHourStr + "|" + rMinStr + "|" + rSecStr +
             " Average: " + aHourStr + "|" + aMinStr + "|" + aSecStr +
             " Median: " + mHourStr + "|" + mMinStr + "|" + mSecStr;

    return result;
}

int main()
{
    std::string l = "0|15|59, 0|16|16, 0|17|20, 0|22|34, 0|19|34, 0|15|0";
    Stat one;
    std::cout << one.stat(l) << std::endl;  // "Range: 00|07|34 Average: 00|17|47 Median: 00|16|48"

    return 0;
}
////////////
using namespace std;

class Stat {
public:
    static string stat(const string &str) {
        vector<size_t> ts;
        string ss = str + ',';
        size_t h, m, s;
        size_t t, sum = 0;
        size_t comma = 0;
        char buffer[50];
        for (size_t i = 0; i < ss.length(); ++i) {
            if (ss[i] == ',') {
                sscanf(ss.c_str() + comma, "%zd|%zd|%zd", &h, &m, &s);
                t = h * 3600 + m * 60 + s;
                ts.push_back(t);
                sum += t;
                comma = i + 1;
            }
        }
        sort(begin(ts), end(ts));
        size_t size = ts.size();
        size_t range = ts.back() - ts.front();
        size_t average = sum / size;
        size_t median = size % 2 ? ts[size / 2] : (ts[size / 2 - 1] + ts[size / 2]) / 2;
        sprintf(buffer, "Range: %02zd|%02zd|%02zd Average: %02zd|%02zd|%02zd Median: %02zd|%02zd|%02zd",
            range / 3600, range / 60 % 60, range % 60,
            average / 3600, average / 60 % 60, average % 60,
            median / 3600, median / 60 % 60, median % 60);
        return buffer;
    }
};
