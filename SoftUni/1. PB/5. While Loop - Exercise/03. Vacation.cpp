#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    double tripCost, moneyInThePocket;
    cin >> tripCost >> moneyInThePocket;
    cin.ignore();

    int spendDaysCnt=0, totalDays=0;

    string command;
    double currMoney;

    while (moneyInThePocket<tripCost)
    {
        totalDays++;

        getline(cin, command);
        cin >> currMoney;
        cin.ignore();

        if (command=="spend") {
            if (currMoney>moneyInThePocket) moneyInThePocket=0;
            else moneyInThePocket-=currMoney;
            spendDaysCnt++;
        }
        else if (command=="save") {
            moneyInThePocket+=currMoney;
            spendDaysCnt=0;
        }
        
        if (spendDaysCnt==5) break;
    }

    if (spendDaysCnt==5) {
        cout << "You can't save the money."  << endl;
        cout << totalDays  << endl;
    }
    else {
        cout << "You saved the money for " << totalDays << " days." << endl;
    }
    

    return 0;
}
