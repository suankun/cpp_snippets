#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isDigit(const string& item) {
    for (int i = 0; i < item.length(); i++) {
        if (!isdigit(item[i]) && item[i] != '-') return false;
    }
    return true;
}

int main() {
    string line;
    getline(cin, line);

    int sum = 0;
    string words = "";

    string item;
    stringstream ss(line);
    while (getline(ss, item, ' '))
    {
        if (isDigit(item)) sum += stoi(item);
        else words += item + ' ';
    }
    
    cout << sum   << endl;
    cout << words << endl;

    return 0;
}
