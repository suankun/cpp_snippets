#include <iostream>
using namespace std;

int main() {
    string city, packageType, vipStatus;
    int days;
    cin >> city >> packageType >> vipStatus >> days;

    double price = 0.0;
    bool isCorrect = true;

    if (city == "Bansko" || city == "Borovets") {
        if (packageType == "withEquipment") {
            price = 100.00;
            if (vipStatus == "yes") price *= 0.9;
        }
        else if (packageType == "noEquipment") {
            price = 80.00;
            if (vipStatus == "yes") price *= 0.95;
        }
        else {
            isCorrect = false;
            cout << "Invalid input!" << endl;
        }
    }
    else if (city == "Varna" || city == "Burgas") {
        if (packageType == "withBreakfast") {
            price = 130.00;
            if (vipStatus == "yes") price *= 0.88;
        }
        else if (packageType == "noBreakfast") {
            price = 100.00;
            if (vipStatus == "yes") price *= 0.93;
        }
        else {
            isCorrect = false;
            cout << "Invalid input!" << endl;
        }
    }
    else {
        isCorrect = false;
        cout << "Invalid input!" << endl;
    }

    if (days > 7) days -= 1;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (days < 1 && isCorrect)
        cout << "Days must be positive number!" << endl;
    else if (isCorrect)
        cout << "The price is " << price*days << "lv! Have a nice time!" << endl;

    return 0;
}
