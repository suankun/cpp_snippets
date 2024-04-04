#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    for (char& ch: line) ch = ch + 3;

    cout << line << endl;

    return 0;
}

