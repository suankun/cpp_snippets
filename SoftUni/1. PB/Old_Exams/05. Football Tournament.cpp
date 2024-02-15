#include <iostream>
using namespace std;

int main() {
    string teamName;
    int matchNumber = 0;
    getline(cin, teamName);
    cin >> matchNumber;

    int totalPoints = 0, wins = 0, draws = 0, loses = 0;
    for (int i=0; i<matchNumber; i++) {
        char tempResult;
        cin >> tempResult;
        if (tempResult == 'W') {
            totalPoints+=3;
            wins++;
        }
        else if (tempResult == 'D') {
            totalPoints+=1;
            draws++;
        }
        else {
            loses++;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if (matchNumber == 0) {
        cout << teamName << " hasn't played any games during this season." << endl;
    }
    else {
        cout << teamName << " has won " << totalPoints << " points during this season." << endl;
        cout << "Total stats:" << endl;
        cout << "## W: " << wins << endl;
        cout << "## D: " << draws << endl;
        cout << "## L: " << loses << endl;
        cout << "Win rate: " << (double)wins/matchNumber * 100 << "%" << endl;
    }

    return 0;
}
