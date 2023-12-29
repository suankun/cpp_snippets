#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double shoes=0.0, outfit=0.0, ball=0.0, accessories=0.0;
    double tax=0.0;
    cin >> tax;

    shoes = tax*0.6;
    outfit = shoes*0.8;
    ball = outfit*0.25;
    accessories = ball*0.2;

    double totalPice = tax+shoes+outfit+ball+accessories;

    cout << fixed << setprecision(2) << totalPice;

    return 0;
}
