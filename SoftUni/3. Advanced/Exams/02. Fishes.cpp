#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <stack>
using namespace std;

void printMap(map<string, int> m) {
    bool bFirst = true;
    for (auto p : m) {
        if (!bFirst)
            cout << ", ";
        else
            bFirst = false;
        cout << p.first << ": " << p.second;
    }
    cout << endl;
}

int main() {
    map< int, stack<string> > bags;

    // reading fish
    int num; string fishName, command;
    while (getline(cin, command) && command != "END")
    {
        num = stoi(command);
        fishName = command.substr(2, command.length()-1);
        
        if (fishName == "THROW") {
            if (!bags[num].empty())
                bags[num].pop();
        }
        else
            bags[num].push(fishName);
        
    }

    // printing bags
    for (auto p : bags) {
        int bag = p.first;
        stack<string> copySt = p.second;  // make copy in order to save the original stack

        stack<string> reversedSt;
        while (copySt.size())
        {
            reversedSt.push(copySt.top());
            copySt.pop();
        }
        
        cout << bag << ": ";
        if (reversedSt.size() != 0) {
            bool bFirst = true;
            while (reversedSt.size()) {
                if (bFirst)
                    bFirst = false;
                else
                    cout << ", ";
                cout << reversedSt.top();
                reversedSt.pop();
            }
        }
        else
            cout << "<empty>";
        cout << endl;
    }

    // restaurant order
    set< string > restaurantOrder;
    while (getline(cin, command) && command != "END")
        restaurantOrder.insert(command);

    // sort fishes for restaurant and pate
    map< string, int > restaurant, pate;
    for (auto p : bags) {
        int bag = p.first;
        stack<string> st = p.second;

        while (st.size())
        {
            string fish = st.top(); st.pop();
            if (restaurantOrder.find(fish) != restaurantOrder.end())
                restaurant[fish]++;
            else
                pate[fish]++;
        }
    }
    
    // print restaurant's order and pate in alphabetical order
    // bool bFirst = true;
    // cout << "Restaurant: ";
    // for (auto p : restaurant) {
    //     if (!bFirst)
    //         cout << ", ";
    //     else
    //         bFirst = false;
    //     cout << p.first << ": " << p.second;
    // }
    // cout << endl;

    // bFirst = true;
    // cout << "Pate: ";
    // for (auto p : restaurant) {
    //     if (!bFirst)
    //         cout << ", ";
    //     else
    //         bFirst = false;
    //     cout << p.first << ": " << p.second;
    // }
    // cout << endl;

    cout << "Restaurant: ";
    if (!restaurant.empty())
        printMap(restaurant);
    else
        cout << "<nothing>" << endl;

    cout << "Pate: ";
    if (!restaurant.empty())
        printMap(pate);
    else
        cout << "<nothing>" << endl;

    return 0;
}
