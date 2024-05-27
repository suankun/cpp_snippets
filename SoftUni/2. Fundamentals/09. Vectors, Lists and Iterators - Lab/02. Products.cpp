#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int countOfProducts;
    cin >> countOfProducts;

    vector<string> products;

    for (int i = 0; i < countOfProducts; i++) {
        string currentProduct;
        cin >> currentProduct;

        products.push_back(currentProduct);
    }

    sort(products.begin(), products.end());

    for (int i = 0; i < products.size(); i++) {
        cout << i+1 << '.' << products[i] << endl;
    }

    return 0;
}
