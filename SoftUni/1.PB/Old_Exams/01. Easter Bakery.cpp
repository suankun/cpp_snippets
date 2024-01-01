#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double flourPrice=0.0, flourKg=0.0, sugarKg=0.0;
    int eggsNum=0, yeastNum=0;

    cin >> flourPrice;
    cin >> flourKg;
    cin >> sugarKg;
    cin >> eggsNum;
    cin >> yeastNum;

    double sugarPrice=flourPrice*0.75;
    double eggsPrice=flourPrice*1.1;
    double yeastPrice=sugarPrice*0.2;
    double flourTotal=flourPrice*flourKg;
    double sugarTotal=sugarPrice*sugarKg;
    double eggsTotal=eggsNum*eggsPrice;
    double yeastTotal=yeastNum*yeastPrice;

    cout << fixed << setprecision(2) << flourTotal+sugarTotal+eggsTotal+yeastTotal << endl;

    return 0;
}
