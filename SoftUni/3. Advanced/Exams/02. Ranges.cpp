#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <limits>

using namespace std;

bool checkIfNumIsInRanges(const vector< pair<int, int> >& ranges, const int& num) {
    auto it = lower_bound(ranges.begin(), ranges.end(), make_pair(num, numeric_limits<int>::max()));
    if (it != ranges.begin()) {
        --it;
        if (num >= it->first && num <= it->second)
            return true;
    }
    return false;
}

int main() {
    vector< pair<int, int> > ranges;
    string line;

    while (getline(cin, line) && line != ".")
    {
        int num1, num2;
        istringstream iss(line);
        iss >> num1 >> num2;
        
        ranges.push_back({num1, num2});
    }
    
    string command;
    while (cin >> command && command != ".")
    {
        int num = stoi(command);

        if (checkIfNumIsInRanges(ranges, num))
            cout << "in" << endl;
        else
            cout << "out" << endl;
    }
    
    return 0;
}
