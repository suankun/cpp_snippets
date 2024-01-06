#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double cakePr=4.0, eggPr=0.45;

    int guest=0, budget=0;
    cin >> guest;
    cin >> budget;

    double cakeNum=ceil(guest/3.0);
    int eggsNum=guest*2;
    double cakesTotal=cakeNum*cakePr;
    double eggsTotal=eggsNum*eggPr;
    double total=cakesTotal+eggsTotal;

    if (budget>=total) {
        cout << "Lyubo bought " << cakeNum << " Easter bread and ";
        cout << fixed << setprecision(2) << eggsNum << " eggs." << endl;
        cout << "He has " << budget-total << " lv. left." << endl;
    }
    else {
        cout << "Lyubo doesn't have enough money." << endl;
        cout << fixed << setprecision(2) << "He needs " << total-budget << " lv. more." << endl;
    }

    return 0;
}
