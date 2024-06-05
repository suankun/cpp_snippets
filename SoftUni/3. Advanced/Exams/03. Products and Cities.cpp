#include <iostream>
#include <map>
#include <string>

using namespace std;


int main(void) {
    int numberOfCities;
    cin >> numberOfCities; cin.ignore();

    map<string, double> listOfCities;

    string cityName;
    double product, pricePerProduct;
    while (listOfCities.size() < numberOfCities)
    {
        getline(cin, cityName);
        cin >> product;
        cin >> pricePerProduct;
        cin.ignore();

        double curProductTotal = product * pricePerProduct;
        listOfCities[cityName] += curProductTotal;
    }
    
    for (pair<string, double> p : listOfCities)
        cout << p.first << ' ' << p.second << endl;

    return 0;
}
