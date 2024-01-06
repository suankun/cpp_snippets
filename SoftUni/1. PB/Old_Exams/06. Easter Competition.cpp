#include <iostream>
using namespace std;

int main() {
    int cakesNum=0, maxPoints=0;
    string topName;
    cin >> cakesNum;

    for (int i=0; i<cakesNum; i++) {
        int totalPoints=0;

        cin.ignore();
        string name;
        getline(cin, name);
        string assessment;
        cin >> assessment;

        while (assessment!="Stop") {
            totalPoints+=stoi(assessment);
            cin >> assessment;
        }

        cout << name << " has " << totalPoints << " points." << endl;

        if (totalPoints>maxPoints) {
            cout << name << " is the new number 1!" << endl;
            topName=name;
            maxPoints=totalPoints;
        }
    }

    cout << topName << " won competition with " << maxPoints << " points!" << endl;

    return 0;
}
