#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    string month;
    int nights;
    double studio, apartment;
    cin >> month >> nights;

    if (month=="May" || month=="October") {
        studio=50.00;
        apartment=65.00;
        if (nights>14) studio*=0.70;
        else if (nights>7) studio*=0.95;
    }
    else if (month=="June" || month=="September") {
        studio=75.20;
        apartment=68.70;
        if (nights>14) studio*=0.80;
    }
    else if (month=="July" || month=="August") {
        studio=76.00;
        apartment=77.00;
    }

    if (nights>14) apartment*=0.90;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Apartment: " << nights*apartment << " lv." << endl;
    cout << "Studio: " << nights*studio << " lv." << endl;

    return 0;
}
