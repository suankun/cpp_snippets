#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    getline(cin, a);

    int s = 0;
    for (char c : a) {
        if (isdigit(c)) s += c - '0';
    }

    char r = s;
    if (isalpha(r))
        cout << r << endl;
    else
        cout << s << endl;

    return 0;
}
