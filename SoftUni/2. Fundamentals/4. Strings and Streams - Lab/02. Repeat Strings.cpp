#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string text, result;
    getline(cin, text);

    string line;
    stringstream ss(text);
    while (getline(ss, line, ' '))
    {
        int len = line.length();
        for (int i = 0; i < len; i++) {
            result += line;
        }
    }
    
    cout << result << endl;

    return 0;
}
