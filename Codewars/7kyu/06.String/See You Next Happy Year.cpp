// https://www.codewars.com/kata/5ae7e3f068e6445bc8000046/train/cpp
#include <iostream>
#include <string>
using namespace std;

unsigned short int nextHappyYear(unsigned short int year) {
    unsigned short int happyYear = year+1;
    while (true) {
        std::string yearToStr = std::to_string(happyYear);
        if (yearToStr[0] != yearToStr[1] && 
            yearToStr[0] != yearToStr[2] &&
            yearToStr[0] != yearToStr[3] &&
            yearToStr[1] != yearToStr[2] &&
            yearToStr[1] != yearToStr[3] &&
            yearToStr[2] != yearToStr[3]) {
            break;
        }
        happyYear++;
    }
    return happyYear; 
}

int main()
{
    std::cout << nextHappyYear(1001) << std::endl;  // 1023
    return 0;
}
