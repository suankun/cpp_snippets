#include <iostream>
using namespace std;

double calcPrice(const string& product, const int& quantity) {
    double price = 0.0;
    if (product == "coffee") price = quantity*1.5;
    else if (product == "water") price = quantity*1.0;
    else if (product == "coke") price = quantity*1.4;
    else if (product == "snacks") price = quantity*2.0;
    return price;
}

int main() {
    string product;
    int quantity;
    cin >> product >> quantity;

    double totalPrice = calcPrice(product, quantity);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalPrice << endl;

    return 0;
}
