#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    string movie;
    int r, c;
    cin >> movie >> r >> c;
    double ticket, total;

    if (movie=="Premiere") ticket=12.00;
    else if (movie=="Normal") ticket=7.50;
    else if (movie=="Discount") ticket=5.00;

    cout.setf(ios::fixed);
    cout.precision(2);
    total=r*c*ticket;
    cout << total << endl;
    
    return 0;
}
