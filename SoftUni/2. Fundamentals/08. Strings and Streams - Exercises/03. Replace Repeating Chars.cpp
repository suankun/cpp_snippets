#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    for (int i = line.length() - 2; i >= 0; i--) {
        if (line[i] == line[i+1]) line.erase(i, 1);
    }

    cout << line << endl;

    return 0;
}
