#include <iostream>
#include <set>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    set<string> names;

    while (N--)
    {
        string name;
        getline(cin, name);
        names.insert(name);
    }
    
    for (string n : names)
        cout << n << endl;

    return 0;
}