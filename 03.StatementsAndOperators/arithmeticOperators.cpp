#include <iostream>

using namespace std;

int main() {
    // currency converter
    const double lv_per_eur {1.95583};
    double lv {0};
    
    cout << "Enter leva to display value in eur: ";
    cin >> lv;

    double result = lv / lv_per_eur;
    cout << lv << "lv are " << result << "euro";

    return 0;
}