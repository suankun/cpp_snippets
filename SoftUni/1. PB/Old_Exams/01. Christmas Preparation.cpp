#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double wrappingPaper = 5.8;
    const double fabric = 7.2;
    const double glue = 1.2;

    int wrappingPaperNumber, fabricNumber, discount;
    double glueLiters;
    cin >> wrappingPaperNumber >> fabricNumber >> glueLiters >> discount;

    double totalPrice = ((wrappingPaper*wrappingPaperNumber) + 
                        (fabric*fabricNumber) +
                        (glue*glueLiters)) * (1-(discount/100.0));

    cout << fixed << setprecision(3) << totalPrice << endl;

    return 0;
}
