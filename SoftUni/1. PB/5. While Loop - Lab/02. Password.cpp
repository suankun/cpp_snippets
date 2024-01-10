#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string user, pass;
    cin >> user >> pass;

    string input;
    cin >> input;
    while (input!=pass)
    {
        cin >> input;
    }
    cout << "Welcome " << user << "!" << endl;

    return 0;
}
