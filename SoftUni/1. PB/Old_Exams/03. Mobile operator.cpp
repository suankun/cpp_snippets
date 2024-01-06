#include <iostream>
#include <iomanip>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    string contract, type, internet;
    int months=0;
    double total=0.0;
    cin >> contract;
    cin >> type;
    cin >> internet;
    cin >> months;

    if (contract=="one") {
        if (type=="Small") total=months*9.98;
        else if (type=="Middle") total=months*18.99;
        else if (type=="Large") total=months*25.98;
        else if (type=="ExtraLarge") total=months*35.99;
    }
    else if (contract=="two") {
        if (type=="Small") total=months*8.58;
        else if (type=="Middle") total=months*17.09;
        else if (type=="Large") total=months*23.59;
        else if (type=="ExtraLarge") total=months*31.79;
    }

    if (internet=="yes") {
        if (type=="Small") total+=months*5.50;
        else if (type=="Middle" || type=="Large") total+=months*4.35;
        else total+=months*3.85;
    }

    if (contract=="two") total=total - (total*0.0375);

    cout << fixed << setprecision(2) << total << " lv." << endl;

    return 0;
}
