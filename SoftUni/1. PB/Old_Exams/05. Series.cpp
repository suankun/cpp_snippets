#include <iostream>
#include <iomanip>

using std::cin;
using std::string;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    double budget=0.0, price=0.0, currPrice=0.0;
    int series=0;
    string name;

    cin >> budget;
    cin >> series;
    cin.ignore();

    for (int i=0; i<series; i++) {
        getline(cin, name);
        cin >> currPrice;
        cin.ignore();

        if (name=="Thrones") currPrice*=0.5;
        else if (name=="Lucifer") currPrice*=0.6;
        else if (name=="Protector") currPrice*=0.7;
        else if (name=="TotalDrama") currPrice*=0.8;
        else if (name=="Area") currPrice*=0.9;

        price+=currPrice;
    }

    cout << fixed << setprecision(2);
    if (price>budget) cout << "You need " << price-budget << " lv. more to buy the series!" << endl;
    else cout << "You bought all the series and left with " << budget-price << " lv." << endl;

    return 0;
}
