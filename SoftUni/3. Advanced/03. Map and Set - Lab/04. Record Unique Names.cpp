#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int names;
    cin >> names;
    cin.ignore();

    set<string> uniqueNames;

    vector<string> order;

    while (names--)
    {
        string currName;
        getline(cin, currName);

        if (uniqueNames.find(currName) == uniqueNames.end())
            order.push_back(currName);
        uniqueNames.insert(currName);
    }
    
    for (string name : order)
        cout << name << endl;

    return 0;
}
