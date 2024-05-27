#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string command;
    getline(cin, command);
    double budget;
    while (command!="End")
    {
        cin >> budget;

        double money=0;
        while (money<budget)
        {
            double currMoney;
            cin >> currMoney;
            money+=currMoney;
        }
        cin.ignore();
        cout << "Going to " << command << "!" << endl;
        getline(cin, command);
    }

    return 0;
}
