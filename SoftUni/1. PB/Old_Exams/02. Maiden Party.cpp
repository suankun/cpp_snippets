#include <iostream>
using namespace std;

int main() {
    const double loveMessage = 0.60;
    const double waxRose = 7.20;
    const double keychain = 3.60;
    const double caricature = 18.20;
    const double luckySurprise = 22.00;

    double budget;
    int loveMessageNum, waxRoseNum, keychainNum, caricatureNum, luckySurpriseNum;
    cin >> budget >> loveMessageNum >> waxRoseNum >> keychainNum >> caricatureNum >> luckySurpriseNum;

    double totalPrice = (loveMessage*loveMessageNum) + (waxRose*waxRoseNum) +
                        (keychain*keychainNum) + (caricature*caricatureNum) +
                        (luckySurprise*luckySurpriseNum);

    int totalArt = loveMessageNum + waxRoseNum + keychainNum + caricatureNum + luckySurpriseNum;

    if (totalArt >= 25) totalPrice *= 0.65; // discount
    totalPrice *= 0.9; // hosting

    cout.setf(ios::fixed);
    cout.precision(2);
    if (totalPrice >= budget) cout << "Yes! " << totalPrice-budget << " lv left." << endl;
    else cout << "Not enough money! " << budget-totalPrice << " lv needed." << endl;

    return 0;
}
