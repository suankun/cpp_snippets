#include <iostream>
using namespace std;

int main() {
    string playerOne, playerTwo;
    int playerOnePt=0, playerTwoPt=0;
    cin >> playerOne;
    cin >> playerTwo;
    int plOnePt=0, plTwoPt=0;
    cin.ignore();
    string command;
    getline(cin, command);

    while (command!="End of game")
    {
        int tempPtOne=stoi(command);
        int tempPtTwo=0;
        cin >> tempPtTwo;
        if (tempPtOne>tempPtTwo) playerOnePt+=tempPtOne-tempPtTwo;
        else if (tempPtOne<tempPtTwo) playerTwoPt+=tempPtTwo-tempPtOne;
        else {
            cin >> tempPtOne;
            cin >> tempPtTwo;
            if (tempPtOne>tempPtTwo) {
                cout << "Number wars!" << endl;
                cout << playerOne << " is winner with " << playerOnePt << " points" << endl;
                break;
            }
            else {
                cout << "Number wars!" << endl;
                cout << playerTwo << " is winner with " << playerTwoPt << " points" << endl;
                break;
            }
        }

        cin.ignore();
        getline(cin, command);
    }
    
    if (command=="End of game") {
        cout << playerOne << " has " << playerOnePt << " points" << endl;
        cout << playerTwo << " has " << playerTwoPt << " points" << endl;
    }

    return 0;
}
