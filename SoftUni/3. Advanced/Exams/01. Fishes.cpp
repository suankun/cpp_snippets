#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    stack<string> flowA;
    queue<string> flowB;

    string command, name;
    char flowType;
    while (getline(cin, command) && command != "end")
    {
        istringstream iss(command);
        iss >> name >> flowType;

        if (flowType == 'A')
            flowA.push(name);
        else
            flowB.push(name);
    }
    
    cout << "Flow A:" << endl;
    if (flowA.empty()) {
        cout << "<EMPTY>" << endl;
    }
    else {
        bool bFirst = true;
        while (flowA.size())
        {
            if (bFirst)
                bFirst = false;
            else
                cout << ", ";
            cout << flowA.top();
            flowA.pop();
        }
        cout << endl;
    }

    cout << "Flow B:" << endl;
    if (flowB.empty()) {
        cout << "<EMPTY>" << endl;
    }
    else {
        bool bFirst = true;
        while (flowB.size())
        {
            if (bFirst)
                bFirst = false;
            else
                cout << ", ";
            cout << flowB.front();
            flowB.pop();
        }
        cout << endl;
    }
    

    return 0;
}
