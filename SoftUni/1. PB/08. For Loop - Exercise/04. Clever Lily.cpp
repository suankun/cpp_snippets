#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main() {
    int age, toyPrice, toysCnt=0, cash=0, money=10;
    double washingMachine;
    cin >> age >> washingMachine >> toyPrice;
    for (int i=1; i<=age; i++) {
        if (i%2!=0) {
            toysCnt++;
        }
        else {
            cash+=money-1;
            money+=10;
        }
    }
    cash+=toysCnt*toyPrice;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (cash>=washingMachine) cout << "Yes! " << cash-washingMachine << endl;
    else cout << "No! " << washingMachine-cash << endl;

    return 0;
}
