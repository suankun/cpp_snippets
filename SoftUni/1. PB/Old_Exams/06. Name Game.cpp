#include <iostream>
using namespace std;

int main() {
    string command;
    getline(cin, command);

    string winName = "";
    int winPoints = 0;
    while (command != "Stop")
    {
        int totalPoints = 0, currentNumber = 0;
        for (int i=0; i<command.length(); i++) {
            cin >> currentNumber;
            if (command[i] == currentNumber) totalPoints += 10;
            else totalPoints += 2;
        }
        if (winPoints <= totalPoints) {
            winPoints = totalPoints;
            winName = command;
        }
        cin.ignore();
        getline(cin, command);
    }
    
    cout << "The winner is " << winName << " with " << winPoints << " points!" << endl;

    return 0;
}
