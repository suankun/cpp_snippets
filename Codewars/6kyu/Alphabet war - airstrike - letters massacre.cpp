// https://www.codewars.com/kata/5938f5b606c3033f4700015a/train/cpp
#include <iostream>
#include <string>
using namespace std;

string alphabetWar(string fight)
{
    for (size_t i {}; i<fight.length(); i++) {
        if (fight[i]=='*') {
            fight[i] = '_';
            if (i == 0) {
                if (fight[i+1] != '*') fight[i+1] = '_';
            } else if (i != fight.length()-1) {
                fight[i-1] = '_';
                if (fight[i+1] != '*') fight[i+1] = '_';
            } else {
                fight[i-1] = '_';
            }
        }
    }

    cout << fight << endl;
    int leftSide {}, rightSide {};
    for (size_t j {}; j<fight.length(); j++) {
        if (fight[j] == 'w') leftSide += 4;
        else if (fight[j] == 'p') leftSide += 3;
        else if (fight[j] == 'b') leftSide += 2;
        else if (fight[j] == 's') leftSide += 1;
        else if (fight[j] == 'm') rightSide += 4;
        else if (fight[j] == 'q') rightSide += 3;
        else if (fight[j] == 'd') rightSide += 2;
        else if (fight[j] == 'z') rightSide += 1;
    }

    return leftSide == rightSide ? "Let's fight again!" : leftSide < rightSide ? "Right side wins!" : "Left side wins!";
}

int main() {
    // cout << alphabetWar("z") << endl;  // "Right side wins!"
    // cout << alphabetWar("z*dq*mw*pb*s") << endl;  // "Let's fight again!"
    // cout << alphabetWar("*wwwwww*z*") << endl;  // "Left side wins!"
    cout << alphabetWar("*hq*") << endl;  // "Let's fight again!"

    return 0;
}
//
#include <string>
#include <map>

std::string alphabetWar(std::string const fight)
{ 
    int result(0);
    std::map<char, int> const power = {  {'w', -4}, {'p', -3}, {'b', -2}, {'s', -1}, 
                                         {'m', 4}, {'q', 3}, {'d', 2}, {'z', 1}, 
                                      };
                                      
    for (int i(0); i < fight.size(); i++) 
        if(power.find(fight[i]) != power.end() && fight[i - 1] != '*' && fight[i + 1] != '*')
             result += power.at(fight[i]);
             
    return result > 0 ? "Right side wins!" :
           result < 0 ? "Left side wins!" : "Let's fight again!";
}
