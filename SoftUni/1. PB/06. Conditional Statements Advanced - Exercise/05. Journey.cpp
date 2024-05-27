#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    double budget, total;
    string season, destination, location;
    cin >> budget >> season;

    if (budget<=100) {
        destination="Bulgaria";
        if (season=="summer") total=budget*0.3;
        else if (season=="winter")  total=budget*0.7;
    }
    else if (budget<=1000) {
        destination="Balkans";
        if (season=="summer") total=budget*0.4;
        else if (season=="winter")  total=budget*0.8;
    }
    else if (budget>1000) {
        destination="Europe";
        total=budget*0.9;
    }
    
    if (season=="summer" && destination!="Europe") location="Camp";
    else location="Hotel";

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Somewhere in " << destination << endl;
    cout << location << " - " << total << endl;
    
    return 0;
}
