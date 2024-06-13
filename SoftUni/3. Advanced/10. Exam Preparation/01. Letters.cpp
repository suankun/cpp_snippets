#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    string line;
    getline(cin, line);

    for (char & ch : line)
        if (!(ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && ch <= 'z'))
            ch = ' ';

    set<string> words;
    istringstream iss(line);
    string curWord;
    while (iss >> curWord)
        words.insert(curWord);
    
    char ch;
    while (cin >> ch && ch != '.') {
        ch = ::tolower(ch);
        bool bFound = false;
        for (const string & curr : words) {
            string transformed = curr;
            transform(transformed.begin(), transformed.end(), transformed.begin(), ::tolower);
            if (transformed.find(ch) != string::npos) {
                bFound = true;
                cout << curr << ' ';
            }
        }

        if (!bFound)
            cout << "---";

        cout << endl;
    }
    
    return 0;
}
