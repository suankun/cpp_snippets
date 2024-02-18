#include <iostream>
using namespace std;

int main() {
    string command;

    string bestName;
    int bestGoals = 0;
    while (getline(cin, command) && command!="END")
    {
        int currentGoals;
        cin >> currentGoals;

        if (bestGoals < currentGoals) {
            bestGoals = currentGoals;
            bestName = command;
        }

        if (currentGoals >= 10) break;

        getline(cin, command);
    }
    
    cout << bestName << " is the best player!" << endl;
    if (bestGoals >= 3) cout << "He has scored " << bestGoals << " goals and made a hat-trick !!!" << endl;
    else cout << "He has scored " << bestGoals << " goals." << endl;

    return 0;
}
