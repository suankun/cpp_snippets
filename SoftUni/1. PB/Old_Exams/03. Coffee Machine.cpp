#include <iostream>
using namespace std;

int main() {
    string beverage, sugar;
    int numberOfBeverage;
    cin >> beverage >> sugar >> numberOfBeverage;

    double price = 0.0;
    if (beverage == "Espresso") {
        if (sugar == "Without") {
            price = 0.90;
            price *= 0.65;
        }
        else if (sugar == "Normal") price = 1.00;
        else if (sugar == "Extra") price = 1.20;
        if (numberOfBeverage >= 5) price *= 0.75;
    }
    else if (beverage == "Cappuccino") {
        if (sugar == "Without") {
            price = 1.00;
            price *= 0.65;
        }
        else if (sugar == "Normal") price = 1.20;
        else if (sugar == "Extra") price = 1.60;
    }
    else if (beverage == "Tea") {
        if (sugar == "Without") {
            price = 0.50;
            price *= 0.65;
        }
        else if (sugar == "Normal") price = 0.60;
        else if (sugar == "Extra") price = 0.70;
    }

    double totalPrice = price * numberOfBeverage;
    if (totalPrice > 15.00) totalPrice *= 0.80;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "You bought " << numberOfBeverage << " cups of " << beverage << " for " << totalPrice << " lv." << endl;

    return 0;
}
