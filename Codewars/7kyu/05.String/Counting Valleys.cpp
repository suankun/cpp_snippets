// https://www.codewars.com/kata/5da9973d06119a000e604cb6/train/cpp
#include <string>

int countValleys(const std::string& s){
    int valley = 0, passedValley = 0;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'U') {
        valley++;
        if (valley == 0) passedValley++;
        }
        else if (s[i] == 'D') {
        valley--;
        }
    }
    return passedValley;
}
//
#include <string>

int countValleys(const std::string& s){
    int valley = 0, passedValley = 0;
    for (const char& d : s) {
        if (d == 'U' && ++valley == 0) passedValley++;
        else if (d == 'D') valley--;
    }
    return passedValley;
}
