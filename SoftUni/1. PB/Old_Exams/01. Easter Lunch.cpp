#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double easterBread=3.20, eggs=4.35 /*12pcs*/, cookies=5.40 /*1kg*/, eggDye=0.15 /*per egg*/;

    int easterBreadNum=0, eggsNum=0, cookiesKg=0;
    cin >> easterBreadNum;
    cin >> eggsNum;
    cin >> cookiesKg;

    cout << fixed << setprecision(2) << (easterBread*easterBreadNum)+(eggs*eggsNum)+(cookies*cookiesKg)+(eggsNum*12*0.15) << endl;

    return 0;
}
