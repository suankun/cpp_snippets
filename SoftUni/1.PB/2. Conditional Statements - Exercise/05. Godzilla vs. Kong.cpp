#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main() {
    double budget, outfitPrice;
    int actors;
    cin >> budget >> actors >> outfitPrice;

    double decor = budget*0.1;
    double totalOutfitPrice = outfitPrice*actors;

    if (actors>150) {
        outfitPrice-=(outfitPrice*0.1);
        totalOutfitPrice=actors*outfitPrice;
    }
    else {
        totalOutfitPrice=actors*outfitPrice;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget<totalOutfitPrice+decor) {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << totalOutfitPrice+decor-budget << " leva more." << endl;
    }
    else {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << budget-(totalOutfitPrice+decor) << " leva left." << endl;
    }
    
    return 0;
}
