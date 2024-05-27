#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    line[0] = toupper(line[0]);
    for (int i = 0; i < line.length(); i++) if (!isalpha(line[i])) line[i+1] = toupper(line[i+1]);

    cout << line << endl;

    return 0;
}
