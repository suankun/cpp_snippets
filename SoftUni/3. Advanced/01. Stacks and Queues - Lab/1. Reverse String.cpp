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
//
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    stack<char> st;
    // for (int i = 0; i < text.length(); i++)
    //     st.push(text[i]);

    for (char ch : text)
        st.push(ch);

    while (st.size()) {
        cout << st.top();
        st.pop();
    }

    cout << endl;
    

    return 0;
}
