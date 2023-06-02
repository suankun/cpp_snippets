// https://www.codewars.com/kata/59377c53e66267c8f6000027/train/cpp
#include <iostream>
#include <string>
using namespace std;

string alphabetWar(string fight)
{
    int left_side_points {}, right_side_points {};
    for (size_t i {}; i<fight.length(); i++) {
        if (fight[i] == 'w') left_side_points += 4;
        else if (fight[i] == 'p') left_side_points += 3;
        else if (fight[i] == 'b') left_side_points += 2;
        else if (fight[i] == 's') left_side_points += 1;
        else if (fight[i] == 'm') right_side_points += 4;
        else if (fight[i] == 'q') right_side_points += 3;
        else if (fight[i] == 'd') right_side_points += 2;
        else if (fight[i] == 'z') right_side_points += 1;
    }
    return (left_side_points>right_side_points) ? "Left side wins!" :
           (left_side_points<right_side_points) ? "Right side wins!" : "Let's fight again!";
}

int main() {
    // std::string word = "zzzzs";   // "Right side wins!"
    std::string word = "p";   // "Left side wins!"
    std::string one = alphabetWar(word);
    cout << one;

    return 0;
}
