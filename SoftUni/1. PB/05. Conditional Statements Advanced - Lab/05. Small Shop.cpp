#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string product, city;
    double quantity;
    cin >> product >> city >> quantity;

    if (product=="coffee") {
        if (city=="Sofia") cout << quantity*0.50 << endl;
        else if (city=="Plovdiv") cout << quantity*0.40 << endl;
        else if (city=="Varna") cout << quantity*0.45 << endl;
    }
    else if (product=="water") {
        if (city=="Sofia") cout << quantity*0.80 << endl;
        else if (city=="Plovdiv") cout << quantity*0.70 << endl;
        else if (city=="Varna") cout << quantity*0.70 << endl;
    }
    else if (product=="beer") {
        if (city=="Sofia") cout << quantity*1.20 << endl;
        else if (city=="Plovdiv") cout << quantity*1.15 << endl;
        else if (city=="Varna") cout << quantity*1.10 << endl;
    }
    else if (product=="sweets") {
        if (city=="Sofia") cout << quantity*1.45 << endl;
        else if (city=="Plovdiv") cout << quantity*1.30 << endl;
        else if (city=="Varna") cout << quantity*1.35 << endl;
    }
    else if (product=="peanuts") {
        if (city=="Sofia") cout << quantity*1.60 << endl;
        else if (city=="Plovdiv") cout << quantity*1.50 << endl;
        else if (city=="Varna") cout << quantity*1.55 << endl;
    }

    return 0;
}
