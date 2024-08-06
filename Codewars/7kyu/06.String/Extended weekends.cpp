// https://www.codewars.com/kata/5be7f613f59e0355ee00000f/train/cpp
#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <map>

std::vector<std::string> solve(int startYear, int endYear) {
    std::vector<int> monthsWith31Days = {1, 3, 5, 7, 8, 10, 12};  // January, March, May, July, August, October, December
    std::map<int, std::string> monthNames = {{1, "Jan"}, {3, "Mar"}, {5, "May"}, {7, "Jul"}, {8, "Aug"}, {10, "Oct"}, {12, "Dec"}};
    std::vector<std::string> extendedWeekendMonths;
    
    for (int year = startYear; year <= endYear; ++year) {
        for (int month : monthsWith31Days) {
            struct tm time_in = {0, 0, 0, 1, month - 1, year - 1900};  // day=1, month is 0-based, year since 1900
            time_t time_temp = mktime(&time_in);
            
            struct tm const *time_out = localtime(&time_temp);
            if (time_out->tm_wday == 5) {  // Check if the first day is a Friday (5 represents Friday)
                extendedWeekendMonths.push_back(monthNames[month]);
            }
        }
    }
    
    if (!extendedWeekendMonths.empty()) {
        std::string firstMonth = extendedWeekendMonths.front();
        std::string lastMonth = extendedWeekendMonths.back();
        std::string countMonths = std::to_string(extendedWeekendMonths.size());
        return {firstMonth, lastMonth, countMonths};
    } else {
        return {};
    }
}

int main() {
    std::vector<std::string> result = solve(2016, 2020);
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    return 0;
}
//
#include <ctime>

std::vector <std::string> solve(int a, int b){
	std::vector<int> months = {0, 2, 4, 6, 7, 9, 11};
  std::vector<std::string> names = {"Jan", "Mar", "May", "Jul", "Aug", "Oct", "Dec", ""};

  int count = 0, first = 8, last = 8;
  std::tm start{};
  start.tm_mday = 1;
 
  for (int i = a; i <= b; i ++) {
    start.tm_year = i - 1900;
    for (int j = 0; j < 7; j ++) {
      start.tm_mon = months[j];
      std::mktime(&start);
      if (start.tm_wday == 5) {
        count ++;
        last = j;
        if (first == 8) first = j;
      }
    }
  }
  
  return {names[first], names[last], std::to_string(count)};
}
