#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int group;
    string season;
    cin >> group >> season;

    double price;
    if (group <= 5) {
        if (season == "spring") price = 50.00;
        else if (season == "summer") price = 48.50;
        else if (season == "autumn") price = 60.00;
        else if (season == "winter") price = 86.00;
    }
    else {
        if (season == "spring") price = 48.00;
        else if (season == "summer") price = 45.00;
        else if (season == "autumn") price = 49.50;
        else if (season == "winter") price = 85.00;
    }

    price *= group;
    if (season == "summer") price *= 0.85;
    if (season == "winter") price *= 1.08;

    cout << fixed << setprecision(2) << price << " leva." << endl;

    return 0;
}
