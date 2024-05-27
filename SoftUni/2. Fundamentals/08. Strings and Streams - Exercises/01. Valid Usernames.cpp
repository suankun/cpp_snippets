#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isValid(const string& username) {
    if (username.length() < 3 || username.length() > 16) return false;
    for (int i = 0; i < username.length(); i++) {
        if (!isalnum(username[i]) && username[i] != '-' && username[i] != '_') return false;
    }
    return true;
}

int main() {
    string line;
    getline(cin, line);

    string separator = ", ";

    bool isFound = line.find(separator) != string::npos;
    while (isFound)
    {
        int index = line.find(separator);
        line.replace(index, separator.length(), "\n");
        isFound = line.find(separator) != string::npos;
    }

    stringstream ss(line);
    string word;
    while (getline(ss, word, '\n'))
    {
        if (isValid(word)) cout << word << endl;
    }
    
    return 0;
}
