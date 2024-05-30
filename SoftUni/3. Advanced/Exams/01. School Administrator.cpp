#include <iostream>
#include <map>
#include <set>
#include <string>
#include <sstream>
using namespace std;

int main() {
    map<int, set<string> > school;

    string command;
    while (getline(cin, command) && command != "END")
    {
        string name;
        int room;
        istringstream iss(command);
        iss >> name >> room;

        school[room].insert(name);
    }
    
    while (cin >> command && command != "END")
    {
        bool isFind = false;
        for (auto r : school) {
            if (r.second.find(command) != r.second.end()) {
                if (!isFind) {
                    cout << command << ": " << r.first;
                    isFind = true;
                }
                else {
                    cout << " " << r.first;
                }
            }            
        }

        if (!isFind)
            cout << command << ": Not found!";
        
        cout << endl;
    }
    

    return 0;
}
