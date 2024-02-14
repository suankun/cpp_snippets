#include <iostream>
using namespace std;

int main() {
    double target;
    cin >> target;

    int qty;
    double totalPrice = 0.0, price;
    int currentPrice;

    cin.ignore();
    string command;
    getline(cin, command);
    while (command != "Party!") {
        cin >> qty;
        currentPrice = command.length() * (double)qty;
        if (currentPrice%2!=0) {
            price = currentPrice * 0.75;
        }
        else {
            price = currentPrice;
        }
        totalPrice += price;
        if (totalPrice >= target) break;

        cin.ignore();
        getline(cin, command);
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if (command == "Party!") cout << "We need " << target - totalPrice << " leva more." << endl;
    else cout << "Target acquired." << endl;
    cout << "Club income - " << totalPrice << " leva." << endl;

    return 0;
}
