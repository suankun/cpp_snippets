// https://www.codewars.com/kata/5c2b4182ac111c05cf388858/train/cpp

// Given time in 24-hour format, convert it to words.

// For example:
// 13:00 = one o'clock 
// 13:09 = nine minutes past one 
// 13:15 = quarter past one 
// 13:29 = twenty nine minutes past one
// 13:30 = half past one 
// 13:31 = twenty nine minutes to two
// 13:45 = quarter to two 
// 00:48 = twelve minutes to one
// 00:08 = eight minutes past midnight
// 12:00 = twelve o'clock
// 00:00 = midnight

// Note: If minutes == 0, use 'o'clock'. If minutes <= 30, use 'past', and for minutes > 30, use 'to'.

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::string solve(std::string time) {
    std::vector<std::string> hh = {"midnight", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
                                   "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "midnight"};
    std::vector<std::string> mm = {"o'clock", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", 
                                   "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", 
                                   "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", 
                                   "twenty nine", "half"};

    int h = std::stoi(time.substr(0, 2));
    int m = std::stoi(time.substr(3));

    if (m == 0) {
        return hh[h] + (h > 0 ? " " + mm[m] : "");
    }
    
    std::stringstream result;
    result << mm[m > 30 ? 60 - m : m];
    if (m % 15 != 0) {
        result << (m == 1 || m == 59 ? " minute" : " minutes");
    }
    result << " " << (m > 30 ? "to" : "past") << " " << hh[h + m / 31];

    return result.str();
}

int main() {
    std::string time = "14:45";
    std::cout << solve(time) << std::endl;
    return 0;
}
