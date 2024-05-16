#include <iostream>
#include <queue>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    int moves;
    cin >> moves;

    istringstream iss(line);

    queue<string> names;
    string player;
    while (iss >> player)
        names.push(player);
    
    int currMoves = moves;
    while (names.size() != 1)
    {
        string currPlayer = names.front(); names.pop();
        currMoves--;

        if (currMoves != 0)
            names.push(currPlayer);
        else {
            currMoves = moves;
            cout << "Removed " << currPlayer << endl;
        }
    }
    
    cout << "Last is " << names.front() << endl;

    return 0;
}
