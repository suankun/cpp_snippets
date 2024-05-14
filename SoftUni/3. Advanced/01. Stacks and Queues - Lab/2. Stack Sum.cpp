#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    istringstream iss(line);

    stack<int> arr;
    int currNum;
    while (iss >> currNum)
    {
        arr.push(currNum);
    }

    while (true)
    {
        getline(cin, line);
        istringstream iss(line);

        if (line == "end") break;

        string command;
        iss >> command;

        if (command == "add") {
            int n1, n2;
            iss >> n1 >> n2;
            arr.push(n1); arr.push(n2);
        }
        else if (command == "remove") {
            int n;
            iss >> n;

            if (n <= arr.size()) {
                while (n--) arr.pop();
            }
        }
    }

    int sum = 0;
    while (arr.size())
    {
        sum += arr.top();
        arr.pop();
    }

    cout << sum << endl;

    
    return 0;
}
