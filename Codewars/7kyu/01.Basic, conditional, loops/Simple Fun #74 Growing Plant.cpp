// https://www.codewars.com/kata/58941fec8afa3618c9000184/train/cpp
int growingPlant(int upSpeed, int downSpeed, int desiredHeight)
{
    int days {}, currentHeight {};
    while (currentHeight <= desiredHeight) {
        days++;
        currentHeight += upSpeed;
        if (currentHeight >= desiredHeight) break;
        currentHeight -= downSpeed;
    }
    return days;
}
//
#include <iostream>
using namespace std;
int growingPlant(const int up, const int down, const int desire)
{
    const int t = up - down;
    return std::max((desire - up + t - 1) / t,0) + 1;
}
