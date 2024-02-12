#include <iostream>
using namespace std;

int main() {
    double budget, pricePerNight;
    int nights, percentAdditionalExpences;
    cin >> budget >> nights >> pricePerNight >> percentAdditionalExpences;

    if (nights > 7) pricePerNight *= 0.95;

    double additionalExpences = budget * (percentAdditionalExpences / 100.0);
    double totalCost = (nights * pricePerNight) + additionalExpences;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget >= totalCost) 
        cout << "Ivanovi will be left with " << budget - totalCost << " leva after vacation." << endl;
    else
        cout << totalCost - budget << " leva needed." << endl;

    return 0;
}
