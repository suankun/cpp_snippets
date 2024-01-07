#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    const double ROOM=18.00, APARTMENT=25.00, PRESIDENT=35.00;
    string daysInput, stay, assesment;
    getline(cin, daysInput);
    getline(cin, stay);
    getline(cin, assesment);

    int days=stoi(daysInput);
    double discount=0.0;

    if (days<=10) {
        if (stay=="apartment") discount=1-30/100.0;
        else if (stay=="president apartment") discount=1-10/100.0;
    }
    else if (days>10 && days<=15) {
        if (stay=="apartment") discount=1-35/100.0;
        else if (stay=="president apartment") discount=1-15/100.0;
    }
    else if (days>15) {
        if (stay=="apartment") discount=1-50/100.0;
        else if (stay=="president apartment") discount=1-20/100.0;
    }

    double price=0.0;
    if (stay=="room for one person") price=(ROOM*(days-1));
    else if (stay=="apartment") price=(APARTMENT*(days-1))*discount;
    else if (stay=="president apartment") price=(PRESIDENT*(days-1))*discount;

    if (assesment=="positive") price+=(price*0.25);
    if (assesment=="negative") price-=(price*0.10);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << price << endl;

    return 0;
}
