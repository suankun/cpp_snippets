#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int w, l, h;
    cin >> w >> l >> h;

    int vol = w*l*h;

    string command;
    cin >> command;
    while (command!="Done")
    {
        int currBox = stoi(command);
        vol -= currBox;
        if (vol < 0) break;

        cin >> command;
    }

    if (vol < 0) cout << "No more free space! You need " << vol*-1 << " Cubic meters more." << endl;
    else cout << vol << " Cubic meters left." << endl;
    

    return 0;
}
