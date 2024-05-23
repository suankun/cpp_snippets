#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;


int main() {
    string line;
    getline(cin, line);

    transform(line.begin(), line.end(), line.begin(), ::tolower);

    vector<string> order;
    map<string, unsigned> words;

    istringstream iss(line);
    string currWord;
    while (iss >> currWord)
    {
        if (words.find(currWord) != words.end()) {
            words[currWord]++;
        }
        else {
            order.push_back(currWord);
            words[currWord]++;
        }
    }

    bool bFirst = true;
    for (string word : order) {
        if (words[word] % 2) {
            if (!bFirst)
                cout << ", ";
            else
                bFirst = false;
            cout << word;
        }
    }
    
    cout << endl;


    return 0;
}
