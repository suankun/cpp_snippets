#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {

    vector<string> order;
    map<string, int> res;

    while (true)
    {
        string resource;
        int quantity;
        cin >> resource >> quantity;

        if (resource == "stop")
            break;

        if (res.find(resource) != res.end()) {
            res[resource] += quantity;
        }
        else {
            order.push_back(resource);
            res[resource] = quantity;
        }
    }

    for (string r : order)
        cout << r << " -> " << res[r] << endl;
    

    return 0;
}
