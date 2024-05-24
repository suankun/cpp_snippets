#include <iostream>
#include <set>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    set<int> numbers;

    istringstream iss(line);
    int num;
    while (iss >> num)
        numbers.insert(num);

    set<int>::iterator it = numbers.begin();
    bool bFirst = true;
    while (it != numbers.end()) {
        if (!bFirst)
            cout << " <= ";
        else
            bFirst = false;
        cout << *it++;
    }
    

    return 0;
}
