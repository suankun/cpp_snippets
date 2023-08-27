// https://www.codewars.com/kata/5bb904724c47249b10000131/train/cpp
#include <iostream>
#include <array>
using namespace std;

int points(const std::array<std::string, 10>& games) {
    int total_points {0};
    for (size_t i {}; i<games.size(); i++) {
        if (games[i][0] < games[i][2]) {
            total_points += 0;
        } else if (games[i][0] == games[i][2]) {
            total_points += 1;
        } else if (games[i][0] > games[i][2]) {
            total_points += 3;
        }
    }
    return total_points;
}

int main() {
    std::array<std::string, 10> games = {"1:0","2:0","3:0","4:0","2:1","3:1","4:1","3:2","4:2","4:3"};
    cout << points(games) << endl;  // 30

    return 0;
}
//
#include <array>
#include <string>

int points(const std::array<std::string, 10>& games) {
  int res = 0;
  for (const std::string& g : games)
    res += g[0] > g[2] ? 3 : g[0] == g[2] ? 1 : 0;
  return res;
}
