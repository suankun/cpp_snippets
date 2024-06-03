#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <queue>
using namespace std;

bool isNumber(string str) {
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return false;
    return true;
}

void printLines(queue<string> firstLine, queue<string> secondLine, stack<string> thirdLine) {
    cout << "1: ";
    if (firstLine.empty())
        cout << "<empty>";
    while (firstLine.size()) {
        cout << firstLine.front() << ' ';
        firstLine.pop();
    }
    cout << endl;

    cout << "2: ";
    if (secondLine.empty())
        cout << "<empty>";
    while (secondLine.size()) {
        cout << secondLine.front() << ' ';
        secondLine.pop();
    }
    cout << endl;

    cout << "3: ";
    if (thirdLine.empty())
        cout << "<empty>";
    while (thirdLine.size()) {
        cout << thirdLine.top() << ' ';
        thirdLine.pop();
    }
    cout << endl;
}

int main() {
    queue<string> firstLine, secondLine;
    stack<string> thirdLine;

    string input, command;
    int num;
    while (getline(cin, input) && input != "5")
    {
        istringstream iss(input);
        iss >> command;

        if (!isNumber(command)) {
            iss >> num;
            switch (num)
            {
                case 1: firstLine.push(command); break;
                case 2: secondLine.push(command); break;
                case 3: thirdLine.push(command); break;
            }
        }
        else {
            string name;
            switch (stoi(command))
            {
                case 10: firstLine.pop(); break;
                case 20: secondLine.pop(); break;
                case 12: name = firstLine.front(); firstLine.pop(); secondLine.push(name); break;
                case 23: name = secondLine.front(); secondLine.pop(); thirdLine.push(name); break;
                case 31: name = thirdLine.top(); thirdLine.pop(); firstLine.push(name); break;
                case 99: printLines(firstLine, secondLine, thirdLine); break;
            }
        }
        
    }
    
    return 0;
}
