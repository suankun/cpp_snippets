#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string command;
    getline(cin, command);

    string topWord = "";
    int topPoints = 0;
    while (command != "End of words")
    {
        int totalPoints = 0;
        for (int i=0; i<command.length(); i++) {
            totalPoints += command[i];
        }
        if (command[0] == 'A' || command[0] == 'a' ||
            command[0] == 'E' || command[0] == 'e' ||
            command[0] == 'I' || command[0] == 'i' ||
            command[0] == 'O' || command[0] == 'o' ||
            command[0] == 'U' || command[0] == 'u' ||
            command[0] == 'Y' || command[0] == 'y') {
            totalPoints *= command.length();
        }
        else {
            totalPoints = floor(totalPoints/command.length());
        }
        if (topPoints < totalPoints) {
            topPoints = totalPoints;
            topWord = command;
        }
        getline(cin, command);
    }
    
    cout << "The most powerful word is " << topWord << " - " << topPoints << endl;

    return 0;
}
