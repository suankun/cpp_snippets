#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
using namespace std;

class Sale {
    string town;
    string product;
    double price, quantity;

    map<string, double> totalSalesByTown;

public:
    Sale(istream & istr) {
        int sales;
        istr >> sales;

        while (sales--)
        {
            istr >> town >> product >> price >> quantity;
            totalSalesByTown[town] += price * quantity;
        }
    }

    void print(ostream & ostr) {
        for (auto& p : totalSalesByTown)
            ostr << fixed << setprecision(2) << p.first << " -> " << p.second << endl;
    }

};

int main() {
    Sale sale(cin);

    sale.print(cout);

    return 0;
}
