#include <iostream>
#include <iomanip>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    double fuelPrice=2.10, guide=100;
    double budget=0.0, fuelNeeded=0.0;
    string day;
    cin >> budget;
    cin >> fuelNeeded;
    cin >> day;

    double total=(fuelNeeded*fuelPrice)+guide;
    if (day=="Saturday") total*=0.90;
    else if (day=="Sunday") total*=0.80;

    cout << fixed << setprecision(2);
    if (budget>=total) cout << "Safari time! Money left: " << budget-total << " lv. " << endl;
    else cout << "Not enough money! Money needed: " << total-budget << " lv." << endl;
        
    return 0;
}
