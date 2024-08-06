// https://www.codewars.com/kata/569218bc919ccba77000000b/train/cpp
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;

// Notes:
// The return format of the date is "YYYY-MM-DD"
// The deposit is always on the "2016-01-01"
// Don't forget to take the rate for a day to be p divided by 36000
// since banks consider that there are 360 days in a year.
// You have: a0 > 0, p% > 0, a >= a0

class DateDays
{
public:
    static std::string dateNbDays(double a0, double a, double p);
    static bool isLeapYear(int year);
    static int daysInMonth(int month, int year);
};

bool DateDays::isLeapYear(int year) {
    if (year % 4 != 0) return false;
    if (year % 100 == 0 && year % 400 != 0) return false;
    return true;
}

int DateDays::daysInMonth(int month, int year) {
    if (month == 2) return isLeapYear(year) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

std::string DateDays::dateNbDays(double a0, double a, double p) {
    // Start date
    int year = 2016, month = 1, day = 1;
    
    // Calculating the daily interest rate
    double daily_rate = p / 36000.0;

    // Calculate the number of days needed to reach the target amount
    int total_days = 0;
    while (a0 < a) {
        a0 += a0 * daily_rate;
        total_days++;
    }

    // Add total_days to the initial date (2016-01-01)
    while (total_days > 0) {
        int days_in_current_month = daysInMonth(month, year);
        if (day + total_days <= days_in_current_month) {
            day += total_days;
            total_days = 0;
        } else {
            total_days -= (days_in_current_month - day + 1);
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    // Format the date as YYYY-MM-DD
    std::ostringstream oss;
    oss << year << "-" << std::setw(2) << std::setfill('0') << month << "-" << std::setw(2) << std::setfill('0') << day;
    return oss.str();
}

int main() {

    cout << DateDays::dateNbDays(4281, 5087, 2) << endl;   // "2024-07-03"
    cout << DateDays::dateNbDays(4620, 5188, 2) << endl;   // "2021-09-19"
    cout << DateDays::dateNbDays(9999, 11427, 6) << endl;  // "2018-03-13"
    cout << DateDays::dateNbDays(3525, 4822, 3) << endl;   // "2026-04-18"

    return 0;
}
//
// #include <iomanip>
// #include <sstream>
// #include <ctime>
// #include <cmath>

// class DateDays
// {
// private:
//     static void DatePlusDays(struct tm* date, int days);
// public:
//     static std::string dateNbDays(double a0, double a, double p);
// };

// void DateDays::DatePlusDays(struct tm* date, int days)
// {
//     const time_t ONE_DAY = 24 * 60 * 60;
//     time_t date_seconds = mktime( date ) + (days * ONE_DAY);
//     *date = *localtime(&date_seconds);
// }

// std::string DateDays::dateNbDays(double a0, double a, double p)
// {
//     struct tm date = { 0, 0, 12 };
//     int year = 2016; int month = 1; int day = 1;
//     date.tm_year = year - 1900;
//     date.tm_mon = month - 1;
//     date.tm_mday = day;
//     int r = static_cast<int>(std::ceil(std::log(a / a0) / std::log(1 + p / 36000.0)));
//     DatePlusDays(&date, r);
//     std::ostringstream oss;
//     oss << std::put_time(&date, "%Y-%m-%d");
//     auto str = oss.str();
//     return str;
// }
