#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int width, length;
    cin >> width >> length;
    int cake = width*length;

    string command;
    cin >> command;

    while (command!="STOP")
    {
        int piecesTaken = stoi(command);
        cake -= piecesTaken;
        if (cake < 0) break;
        cin >> command;
    }

    if (cake < 0) cout << "No more cake left! You need " << cake*-1 << " pieces more." << endl;
    else cout << cake << " pieces are left." << endl;
    

    return 0;
}
