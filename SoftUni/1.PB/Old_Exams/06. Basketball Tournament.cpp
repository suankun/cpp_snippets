#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string command;
    double win=0, lost=0;
    getline(cin, command);
    while (command!="End of tournaments")
    {
        int matches=0;
        cin >> matches;
        for (int i=0; i<matches; i++) {
            int firstPt=0, secondPt=0;
            cin >> firstPt;
            cin >> secondPt;
            if (firstPt>secondPt) {
                win++;
                cout << "Game " << i+1 << " of tournament " << command << ": win with " << firstPt-secondPt << " points." << endl;
            }
            else {
                lost++;
                cout << "Game " << i+1 << " of tournament " << command << ": lost with " << secondPt-firstPt << " points." << endl;
            }
        }
        cin.ignore();
        getline(cin, command);
    }

    cout << fixed << setprecision(2) << (win/(win+lost))*100 << "% matches win" << endl;
    cout << fixed << setprecision(2) << (lost/(win+lost))*100 << "% matches lost" << endl;

    return 0;
}
