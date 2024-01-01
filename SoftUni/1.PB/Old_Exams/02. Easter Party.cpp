#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int guests=0;
    double pricePerGuest=0.0, budget=0.0;

    cin >> guests;
    cin >> pricePerGuest;
    cin >> budget;

    double priceTotal=guests*pricePerGuest;

    if (guests>=10 && guests<=15) priceTotal*=0.85;
    else if (guests>15 && guests<=20) priceTotal*=0.80;
    else if (guests>20) priceTotal*=0.75;

    priceTotal+=budget*0.1; // price of the cake

    cout << fixed << setprecision(2);
    if (budget>=priceTotal) cout << "It is party time! " << budget-priceTotal << " leva left." << endl;
    else cout << "No party! " << priceTotal-budget << " leva needed." << endl;

    return 0;
}
