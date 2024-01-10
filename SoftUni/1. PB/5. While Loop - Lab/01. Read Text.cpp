#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string word;
    while (word!="Stop")
    {
        cout << word << endl;
        cin >> word;
    }

    return 0;
}
