// https://www.codewars.com/kata/5270d0d18625160ada0000e4/train/cpp
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int score(const std::vector<int>& dice) {
    int totalPoints = 0;

    map<int, int> rolls;
    for (const int& curRoll : dice)
        rolls[curRoll]++;

    for (auto p : rolls) {
        while (p.second)
        {
            if (p.second >= 3 && p.first == 1) {
                totalPoints += 1000;
                p.second -= 3;
            }
            else if (p.second > 0 && p.first == 1) {
                totalPoints += 100;
                p.second -= 1;
            }

            if (p.second >= 3 && p.first == 2) {
                totalPoints += 200;
                p.second -= 3;
            }
            else if (p.second > 0 && p.first == 2) {
                p.second -= 1;
            }

            if (p.second >= 3 && p.first == 3) {
                totalPoints += 300;
                p.second -= 3;
            }
            else if (p.second > 0 && p.first == 3) {
                p.second -= 1;
            }

            if (p.second >= 3 && p.first == 4) {
                totalPoints += 400;
                p.second -= 3;
            }
            else if (p.second > 0 && p.first == 4) {
                p.second -= 1;
            }

            if (p.second >= 3 && p.first == 5) {
                totalPoints += 500;
                p.second -= 3;
            }
            else if (p.second > 0 && p.first == 5) {
                totalPoints += 50;
                p.second -= 1;
            }

            if (p.second >= 3 && p.first == 6) {
                totalPoints += 600;
                p.second -= 3;
            }
            else if (p.second > 0 && p.first == 6) {
                p.second -= 1;
            }
        }
        
    }

    return totalPoints;
}

int main()
{
    cout << score({2, 3, 4, 6, 2}) << endl;  // 0
    cout << score({2, 4, 4, 5, 4}) << endl;  // 450
    cout << score({5, 1, 3, 4, 1}) << endl;  // 250
    cout << score({1, 1, 1, 3, 1}) << endl;  // 1100

    return 0;
}
