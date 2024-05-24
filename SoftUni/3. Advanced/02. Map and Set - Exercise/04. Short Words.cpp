#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    transform(line.begin(), line.end(), line.begin(), ::towlower);

    set<string> words;
    string currWord;
    istringstream iss(line);

    while (iss >> currWord)
        if (currWord.length() < 5)
            words.insert(currWord);
    
    bool bFirst = true;
    for (string word : words) {
        if (bFirst)
            bFirst = false;
        else
            cout << ", ";
        cout << word;
    }
    

    return 0;
}
