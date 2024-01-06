#include <iostream>
using namespace std;

int main() {
    string command;
    int eggsInit=0;
    cin >> eggsInit;

    int totalEggsSold=0;

    cin >> command;
    while (command!="Close")
    {
        int tempEggs=0;
        cin >> tempEggs;
        if (command=="Buy") {
            if (eggsInit-tempEggs<0) break;
            eggsInit-=tempEggs;
            totalEggsSold+=tempEggs;
        }
        else if (command=="Fill") {
            eggsInit+=tempEggs;
        }
        cin >> command;
    }
    
    if (command=="Close") {
        cout << "Store is closed!" << endl;
        cout << totalEggsSold << " eggs sold." << endl;
    }
    else {
        cout << "Not enough eggs in store!" << endl;
        cout << "You can buy only " << eggsInit << "." << endl;
    }

    return 0;
}
