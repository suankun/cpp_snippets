#include <iostream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;

int main() {
    int foodQuantity;
    cin >> foodQuantity;
    cin.ignore();

    queue<int> orders;

    string line;
    getline(cin, line);
    istringstream iss(line);

    int tmp, maxOrder = 0;
    while (iss >> tmp)
    {
        if (maxOrder < tmp)
            maxOrder = tmp;
        orders.push(tmp);
    }

    cout << maxOrder << endl;
    
    while (orders.size() && foodQuantity >= orders.front())
    {
        foodQuantity -= orders.front();
        orders.pop();
    }

    if (orders.size() == 0) {
        cout << "Orders complete" << endl;
    }
    else {
        cout << "Orders left: ";
        while (orders.size())
        {
            cout << orders.front() << ' ';
            orders.pop();
        }
    }
    
    cout << endl;

    return 0;
}
