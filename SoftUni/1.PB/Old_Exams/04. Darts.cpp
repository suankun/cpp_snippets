#include <iostream>
#include <string>
using namespace std;

int main() {
    string playerName;
    getline(cin, playerName);
    int points=301, tempPoints=0, successfullShots=0, unsuccessfullShots=0;

    string command;

    while (command!="Retire")
    {
        cin >> command;
        cin >> tempPoints;
        if (command=="Single") {
            if (points<tempPoints) {
                unsuccessfullShots++;
                continue;
            }
            else points-=tempPoints;
        }
        if (command=="Double") {
            if (points<(tempPoints*2)) {
                unsuccessfullShots++;
                continue;
            }
            else points-=(tempPoints*2);
        }
        if (command=="Triple") {
            if (points<(tempPoints*3)) {
                unsuccessfullShots++;
                continue;
            }
            else points-=(tempPoints*3);
        }
        successfullShots++;
        if (points==0) break;
    }
    
    if (points==0) cout << playerName << " won the leg with " << successfullShots << " shots.";
    else  cout << playerName << " retired after " << unsuccessfullShots << " unsuccessful shots.";

    return 0;
}
