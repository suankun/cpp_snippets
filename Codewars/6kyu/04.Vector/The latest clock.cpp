// https://www.codewars.com/kata/58925dcb71f43f30cd00005f/train/cpp
// Write a function which receives 4 digits and returns the latest time of day that can be built with those digits.

// The time should be in HH:MM format.

// Examples:

// digits: 1, 9, 8, 3 => result: "19:38"
// digits: 9, 1, 2, 5 => result: "21:59" (19:25 is also a valid time, but 21:59 is later)

// Notes:
// Result should be a valid 24-hour time, between 00:00 and 23:59.
// Only inputs which have valid answers are tested.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::string latestClock(int a, int b, int c, int d) 
{
    std::vector<int> digits = {a, b, c, d};
    std::sort(digits.begin(), digits.end(), std::greater<int>());

    int digitsGreaterThan5 = std::count_if(digits.begin(), digits.end(), [](int digit) {
        return digit > 5;
    });

    auto getMaxDigit = [&](int maxDigit) -> int {
        for (auto it = digits.begin(); it != digits.end(); ++it) {
            if (*it <= maxDigit) {
                int selectedDigit = *it;
                digits.erase(it);
                return selectedDigit;
            }
        }
        return -1;
    };

    int firstDigit = getMaxDigit(digitsGreaterThan5 > 1 ? 1 : 2);
    int secondDigit = getMaxDigit(firstDigit == 2 ? 3 : 9);
    int thirdDigit = getMaxDigit(5);
    int fourthDigit = getMaxDigit(9);

    return std::to_string(firstDigit) + std::to_string(secondDigit) + ":" + 
           std::to_string(thirdDigit) + std::to_string(fourthDigit);
}

int main() {

    cout << latestClock(1, 9, 8, 3) << endl;  // 19:38
    cout << latestClock(9, 1, 2, 5) << endl;  // 21:59
    cout << latestClock(1, 2, 8, 9) << endl;  // 19:28
    cout << latestClock(2, 4, 0, 0) << endl;  // 20:40

    return 0;
}
//
#include <string>
#include <vector>
#include <algorithm>

std::string latestClock(int a, int b, int c, int d) 
{ 
    std::vector<int> v = {a , b, c, d};  
    sort(v.begin(), v.end(), std::greater<int>());
    
    while(v[0]*10 + v[1] > 23 || v[2]*10 + v[3] > 59) {
        prev_permutation(v.begin(), v.end());
    }
    
    std::string time = "";
    for (const auto& d : v)
        time.push_back(d + '0');
        
    return time.insert(2,":");
}
