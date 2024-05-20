#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    map<double, unsigned> occurrences;

    vector<double> order;

    double num;
    istringstream iss(line);
    while (iss >> num) {
        if (occurrences.find(num) == occurrences.end()) {
            order.push_back(num);
        }

        occurrences[num]++;
    }
    
    for (double key : order)
        cout << key << " - " << occurrences[key] << " times" << endl;
    

    return 0;
}
