#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main() {
    double budget=0.0, salary=0.0;
    cin >> budget;
    cin.ignore();

    string command;
    getline(cin, command);
    while (command!="ACTION")
    {
        if (command.length()>15) {
            budget-=(budget*0.2);
        } else {
            cin >> salary;
            cin.ignore();
            if (budget<salary) break;
            budget-=salary;
        }
        getline(cin, command);
    }
    
    cout << fixed << setprecision(2);
    if (command=="ACTION") cout << "We are left with " << budget << " leva." << endl;
    else cout << "We need " << salary-budget << " leva for our actors." << endl;

    return 0;
}
