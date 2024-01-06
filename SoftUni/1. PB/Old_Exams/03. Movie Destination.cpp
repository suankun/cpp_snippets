#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main() {
    double budget=0.0, total=0.0;
    string destination, season;
    int days=0;
    cin >> budget;
    cin >> destination;
    cin >> season;
    cin >> days;

    if (destination=="Dubai") {
        if (season=="Winter") total=days*45000;
        else if (season=="Summer") total=days*40000;
        total*=0.70;
    }

    if (destination=="Sofia") {
        if (season=="Winter") total=days*17000;
        else if (season=="Summer") total=days*12500;
        total*=1.25;
    }

    if (destination=="London") {
        if (season=="Winter") total=days*24000;
        else if (season=="Summer") total=days*20250;
    }

    cout << fixed << setprecision(2);
    if (budget>=total) 
        cout << "The budget for the movie is enough! We have " << budget-total << " leva left!" << endl;
    else
        cout << "The director needs " << total-budget << " leva more!" << endl;

    return 0;
}
