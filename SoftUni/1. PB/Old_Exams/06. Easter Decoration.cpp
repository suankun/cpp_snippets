#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double basket=1.5, wreath=3.8, chocolateBunny=7.0;
    double totalMoney=0.0;

    int clients=0;
    cin >> clients;
    cin.ignore();

    cout << fixed << setprecision(2);
    for (int i=0; i<clients; i++) {
        double currOrder=0;
        int orders=0;
        string command;
        getline(cin, command);
        while(command!="Finish") {
            orders++;
            if (command=="basket") currOrder+=basket;
            else if (command=="wreath") currOrder+=wreath;
            else if (command=="chocolate bunny") currOrder+=chocolateBunny;
            getline(cin, command);
        }
        if (orders%2==0) currOrder=currOrder*0.8;
        cout << "You purchased " << orders << " items for " << currOrder << " leva." << endl;
        totalMoney+=currOrder;
    }

    cout << "Average bill per client is: " << totalMoney/clients << " leva." << endl;
        
    return 0;
}
