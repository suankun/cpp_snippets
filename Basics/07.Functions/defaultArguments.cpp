#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double calculate_price(double price=12.30, double vat = 0.2);
void print_name(string name, string prefix = "Mr");

int main() {
    double price {14.99}, vat{0.2};
    string name {"Edmont Budakyan"};
    string prefix {"Mr"};

    cout << fixed << setprecision(2);
    cout << "With 2 args: " << calculate_price(price, vat) << endl;
    cout << "With 1 arg: " << calculate_price(price) << endl;
    cout << "Without args: " << calculate_price() << endl;

    print_name(name, prefix);
    print_name(name);

    return 0;
}

double calculate_price(double price, double vat) {
    return price + (price * vat);
}

void print_name(string name, string prefix) {
    cout << "Hello " << prefix << " " << name << endl;
}