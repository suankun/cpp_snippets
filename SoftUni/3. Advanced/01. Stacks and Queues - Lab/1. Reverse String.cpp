#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main() {
    string line;
    getline(cin, line);

    stack<char> text;

    // for (int i = 0; i < line.length(); i++) {
    //     text.push(line[i]);
    // }
    
    for (string::iterator it = line.begin(); it != line.end(); it++) {
        text.push(*it);
    }


    // while(!text.empty()) {
    //     cout << text.top();
    //     text.pop();
    // }

    while(text.size()) {
        cout << text.top();
        text.pop();
    }
    
    
    return 0;
}
