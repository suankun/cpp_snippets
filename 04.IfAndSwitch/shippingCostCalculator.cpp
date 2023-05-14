#include <iostream>
using namespace std;

int main() {
    int lenght {}, width {}, height {}; // user input
    const int dimension_limitation {10}; // all diminsions must be less than 10 inches
    const double base_cost {2.50};
    double total_cost {};

    cout << "Enter lenght, width and height separated with space: ";
    cin >> lenght >> width >> height; 

    if (lenght > 10 || width > 10 || height > 10) {
        cout << "We cannot ship it, becouase the package is too big!";
    } else {
        if ((lenght * width * height) >= 500) {
            total_cost = base_cost + (base_cost*0.25);
        } else if ((lenght * width * height) >= 100) {
            total_cost = base_cost + (base_cost*0.1);
        } else {
            total_cost = base_cost;
        }
        cout << "You bill is " << total_cost << ".";
    }

    return 0;
}