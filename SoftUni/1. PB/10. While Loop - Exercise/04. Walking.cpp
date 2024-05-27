#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int goal=10000, steps=0, flag=0;
    string command;
    getline(cin, command);

    int currSteps;
    while (command!="Going home")
    {
        currSteps=stoi(command);
        steps+=currSteps;
        if (steps>=goal) {
            flag=1;
            break;
        }
        getline(cin, command);
    }
    if (command=="Going home") {
        getline(cin, command);
        currSteps=stoi(command);
        steps+=currSteps;
        if (steps>=goal) flag=1;
    }

    if (flag) {
        cout << "Goal reached! Good job!" << endl;
        // cout << steps-goal << " steps over the goal!" << endl;
    }
    else {
        cout << goal-steps << " more steps to reach goal." << endl;
    }
        

    return 0;
}
