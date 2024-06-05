#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

bool compareItems(const pair<string, double>& a, const pair<string, double>& b) {
    return a.second > b.second;
}

int main(void) {
    int shoppingItems;
    cin >> shoppingItems;

    vector< pair<string, double> > items;

    string itemName;
    double itemPrice, totalSum = 0.0;
    int itemCount;
    for (int curShoppingItems = 0; curShoppingItems < shoppingItems; curShoppingItems++) {
        cin >> itemName;
        cin >> itemPrice;
        cin >> itemCount;

        double curItemPrice = itemPrice * itemCount;
        items.push_back({itemName, curItemPrice});
        totalSum += curItemPrice;
    }

    cout << "The total sum is: " << totalSum << " lv." << endl;

    sort(items.begin(), items.end(), compareItems);

    vector< pair<string, double> >::iterator itR = items.begin();
    for (; itR != items.end(); itR++) {
        if (itR->first == itR->first)
            cout << itR->first << ' ' << itR->second << endl;
    }

    return 0;
}
