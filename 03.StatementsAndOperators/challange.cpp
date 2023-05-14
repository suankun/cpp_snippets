#include <iostream>
using namespace std;

int main() {
    int amount_of_cents {};

    cout << "Enter the amout of cents: ";
    cin >> amount_of_cents;

    cout << "Dollars: " << amount_of_cents / 100 << endl;
    amount_of_cents %= 100;
    cout << "Quarters: " << amount_of_cents / 25 << endl;
    amount_of_cents %= 25;
    cout << "Dimes: " << amount_of_cents / 10 << endl;
    amount_of_cents %= 10;
    cout << "Nickels: " << amount_of_cents / 5 << endl;
    amount_of_cents %= 5;
    cout << "Pennies: " << amount_of_cents / 1 << endl;

    return 0;
}