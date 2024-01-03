#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    int days=0, hours=0;
    double money=0.0, moneyTotal=0.0;
    cin >> days;
    cin >> hours;

    cout << fixed << setprecision(2);
    for (int i=1; i<=days; i++) {
        for (int j=1; j<=hours; j++) {
            if (i%2==0 && j%2!=0) money+=2.5;
            else if (i%2!=0 && j%2==0) money+=1.25;
            else money+=1; 
        }
        cout << "Day: " << i << " - " << money << " leva" << endl;
        moneyTotal+=money;
        money=0.0;
    }

    cout << "Total: " << moneyTotal << " leva" << endl;

    return 0;
}
