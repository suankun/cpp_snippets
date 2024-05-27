#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    int budget, fishermen;
    string season;
    double total;
    cin >> budget >> season >> fishermen;

    if (season=="Spring")  total=3000.0;
    else if (season=="Summer")  total=4200.0;
    else if (season=="Autumn") total=4200.0;
    else if (season=="Winter") total=2600.0;

    if (fishermen<=6) total*=0.9;
    else if (fishermen>6 && fishermen<=11) total*=0.85;
    else if (fishermen>11) total*=0.75;

    if (fishermen%2==0 && season!="Autumn") total*=0.95;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget>=total) cout << "Yes! You have " << budget-total << " leva left." << endl;
    else cout << "Not enough money! You need " << total-budget << " leva." << endl;
    
    return 0;
}
