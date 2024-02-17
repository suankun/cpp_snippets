#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string fruit, size;
    int pcs;
    cin >> fruit >> size >> pcs;

    double price = 0.0;
    if (size == "small") {
        if (fruit == "Watermelon") price = 56.00;
        else if (fruit == "Mango") price = 36.66;
        else if (fruit == "Pineapple") price = 42.10;
        else if (fruit == "Raspberry") price = 20.00;
        price *= 2 * pcs;
    }
    else if (size == "big") {
        if (fruit == "Watermelon") price = 28.70;
        else if (fruit == "Mango") price = 19.60;
        else if (fruit == "Pineapple") price = 24.80;
        else if (fruit == "Raspberry") price = 15.20;
        price *= 5 * pcs;
    }

    if (price >= 400.00 && price <= 1000) price *= 0.85;
    else if (price > 1000) price *= 0.5;

    cout << fixed << setprecision(2) << price << " lv." << endl;

    return 0;
}
