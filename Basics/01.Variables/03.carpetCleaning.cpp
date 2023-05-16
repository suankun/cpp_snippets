// program to calculate estimate cost plus tax for carpet cleaning
// carpets number
// cost
// tax
// estimate cost plus tax
// period of valid

#include <iostream>

using namespace std;

int main() {

    int number_of_carpets {0};
    const double price_per_carpet {30.0};
    const int days_of_expiry {30};    

    cout << "How many carpets do you want to clean: ";
    cin >> number_of_carpets;
    cout << "Price per room: " << price_per_carpet << endl;
    cout << "Total cost: " << price_per_carpet * number_of_carpets << "lv" << endl;
    const double tax = price_per_carpet * number_of_carpets * 0.2;
    cout << "VAT: " << tax << "lv" << endl;
    cout << "========================================\n";
    cout << "Estimate cost plus tax will be: " << (number_of_carpets * price_per_carpet) + tax << "lv" << endl;
    cout << "Period of valid: " << days_of_expiry << " days." << endl;

    return 0;
}
