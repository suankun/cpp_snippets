#include <iostream>
using namespace std;

int main() {
    int numberOfSoldGames;
    cin >> numberOfSoldGames;
    cin.ignore();
    int hearthstone=0, fornite=0, overwatch=0, others=0;

    string nameOfTheGame;
    for (int i=0; i<numberOfSoldGames; i++) {
        getline(cin, nameOfTheGame);
        if (nameOfTheGame == "Hearthstone") hearthstone++;
        else if (nameOfTheGame == "Fornite") fornite++;
        else if (nameOfTheGame == "Overwatch") overwatch++;
        else others++;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Hearthstone - " << (double)hearthstone/numberOfSoldGames * 100 << "%" << endl;
    cout << "Fornite - " << (double)fornite/numberOfSoldGames * 100 << "%" << endl;
    cout << "Overwatch - " << (double)overwatch/numberOfSoldGames * 100 << "%" << endl;
    cout << "Others - " << (double)others/numberOfSoldGames * 100 << "%" << endl;

    return 0;
}
