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
//
#include <string_view>

int countValleys(std::string_view s) {
    int level = 0;
    int count = 0;
    for (const auto c : s) {
        switch (c) {
            case 'U': count += (++level == 0); break;
            case 'D': --level; break;
        }
    }
    return count;
}
