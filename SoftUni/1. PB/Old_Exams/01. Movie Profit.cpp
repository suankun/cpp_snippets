#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main() {
    string name;
    int days=0, tickets=0, percent=0;;
    double ticketPrice=0.0;

    getline(cin, name);
    cin >> days;
    cin >> tickets;
    cin >> ticketPrice;
    cin >> percent;

    double totalTicketsIncome = tickets*ticketPrice*days;
    double moneyForCinema = totalTicketsIncome*percent / 100;

    cout << fixed << setprecision(2);
    cout << "The profit from the movie " << name << " is " << totalTicketsIncome-moneyForCinema << " lv." << endl;

    return 0;
}
