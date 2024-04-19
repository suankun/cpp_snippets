// https://www.codewars.com/kata/5648b12ce68d9daa6b000099/train/cpp
#include <iostream>

using namespace std;

#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
    int peopleInTheBus = 0;
    for (size_t i = 0; i < busStops.size(); i++) peopleInTheBus += busStops[i].first - busStops[i].second;
    return peopleInTheBus;
}

int main() {
    cout << number({{10,0},{3,5},{5,8}}) << endl;  // 5
    cout << number({{3,0},{9,1},{4,10},{12,2},{6,1},{7,10}}) << endl;  // 17
    cout << number({{3,0},{9,1},{4,8},{12,2},{6,1},{7,8}}) << endl;  // 21
    cout << number({{0,0}}) << endl;  // 0
    cout << number({{10,0},{13,0},{17,40}}) << endl;  // 0

    return 0;
}
