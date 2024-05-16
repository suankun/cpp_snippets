#include <iostream>
#include <queue>
#include <string>
using namespace std;

void processCustomers(queue<string>& customers) {
    while (customers.size())
    {
        cout << customers.front() << endl;
        customers.pop();
    }
}

int main() {
    queue<string> customers;

    string name;
    while (cin >> name && name != "End") {
        if (name == "Paid")
            processCustomers(customers);
        else
            customers.push(name);
    }
    
    if (name == "End")
        cout << customers.size() << " people remaining." << endl;

    return 0;
}
