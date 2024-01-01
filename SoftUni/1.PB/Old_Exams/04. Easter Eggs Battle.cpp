#include <iostream>
using namespace std;

int main() {
    string command;
    int player1=0, player2=0;
    cin >> player1;
    cin >> player2;

    while (player1>0 && player2>0)
    {
        cin >> command;
        if (command=="End") break;
        else if (command=="one") player2--;
        else if (command=="two") player1--;
    }
    
    if (player1==0) cout << "Player one is out of eggs. Player two has " << player2 << " eggs left." << endl;
    else if (player2==0) cout << "Player two is out of eggs. Player one has " << player1 << " eggs left." << endl;
    else {
        cout << "Player one has " << player1 << " eggs left." << endl;
        cout << "Player two has " << player2 << " eggs left." << endl;
    }

    return 0;
}
