#include <iostream>
#include <string>
using namespace std;

int main() {
    string line, findStr, replaceStr;
    getline(cin, line);
    getline(cin, findStr);
    getline(cin, replaceStr);

    bool isFound = line.find(findStr) != string::npos;
    while (isFound)
    {
        int index = line.find(findStr);
        line.replace(index, findStr.length(), replaceStr);
        isFound = line.find(findStr) != string::npos;
    }
    
    cout << line << endl;

    return 0;
}
