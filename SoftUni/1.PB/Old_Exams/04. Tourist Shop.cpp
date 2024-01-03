#include <iostream>
#include <iomanip>

using std::cin;
using std::string;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    double budget=0.0, price=0.0;
    int cnt=0;
    cin >> budget;
    cin.ignore();

    double budgetInit=budget;
    string command;
    getline(cin, command);
    while (command!="Stop")
    {
        cnt++;
        cin >> price;
        cin.ignore();
        if (cnt%3==0) price/=2;
        if (budget<price) break;
        budget-=price;
        getline(cin, command);
    }
    
    cout << fixed << setprecision(2);
    if (command=="Stop") {
        cout << "You bought " << cnt << " products for " << budgetInit-budget << " leva." << endl;
    }
    else {
        cout << "You don't have enough money!" << endl;
        cout << "You need " << price-budget << " leva!" << endl;
    }

    return 0;
}
