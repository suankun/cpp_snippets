#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double budget=0.0, priceOfSuits=0.0;
    int actors=0;
    cin >> budget;
    cin >> actors;
    cin >> priceOfSuits;

    double totalPriceOfSuits=0.0;
    if (actors>150) {
        priceOfSuits-=(priceOfSuits*0.1);
        totalPriceOfSuits=actors*priceOfSuits;
    }
    else {
        totalPriceOfSuits=actors*priceOfSuits;
    }

    double moneyNeeded=0.0;
    double decor=budget*0.1;
    moneyNeeded=decor+totalPriceOfSuits;

    if (moneyNeeded>budget) {
        cout << "Not enough money!" << endl;
        cout << fixed << setprecision(2) << "Wingard needs " << moneyNeeded-budget << " leva more." << endl;
    }
    else {
        cout << "Action!" << endl;
        cout << fixed << setprecision(2) << "Wingard starts filming with " << budget-moneyNeeded << " leva left." << endl;
    }

    return 0;
}
