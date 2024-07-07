#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
#include <map>
using namespace std;

class Sale {
    string town;
    string product;
    double price = 0;
    double quantity = 0;

    public:

        // Sale() : price(0), quantity(0) {}

        // Sale(string town = "", string product = "", double price = 0, double quantity = 0)
        //     : town(town), product(product), price(price), quantity(quantity) {}

        Sale(istream & istr);

        const string & getTown(void) { return town; }

        double getTotal(void) { return price * quantity; }
};

Sale::Sale(istream & istr) {
    string buf;
    getline(istr, buf);

    istringstream bufStr(buf);

    bufStr >> town >> product >> price >> quantity;
}

class Sales {
    public:
        typedef vector<Sale> SalesData;

    private:
        SalesData data;

    public:
        Sales(istream & istr);

        SalesData & getData(void) { return data; }
};

Sales::Sales(istream & istr) {
    int salesNum;
    istr >> salesNum; istr.ignore();

    data.reserve(salesNum);

    while (salesNum--)
        data.push_back(Sale(istr));
    
}

class SalesCalculator {

    Sales & data;

    map<string, double> salesByTown;

    public:

        SalesCalculator(Sales & data) : data(data) {}

        void calculateSalesByTown();

        void print(ostream & ostr);

};

void SalesCalculator::calculateSalesByTown() {
    salesByTown.clear();

    Sales::SalesData & sd = data.getData();

    for (Sale & curr : sd) {

        const string & town = curr.getTown();

        salesByTown[town] += curr.getTotal();
    }
}

void SalesCalculator::print(ostream & ostr) {

    ostr << fixed << setprecision(2);

    for (const pair<string, double> & curr : salesByTown) {
        ostr << curr.first << " -> " << curr.second << endl;
    }
}

int main() {

    Sales salesData(cin);

    SalesCalculator salesCalculation(salesData);

    salesCalculation.calculateSalesByTown();

    salesCalculation.print(cout);

    return 0;
}
