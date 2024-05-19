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
//
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    stack<int> numbers;

    int num;
    istringstream iss(line);
    while (iss >> num)
        numbers.push(num);

    while (true)
    {
        int i = 0;
        string command;
        cin >> command;
        if (command == "end")
            break;
        else if (command == "add") {
            int n1, n2;
            cin >> n1 >> n2;
            numbers.push(n1);
            numbers.push(n2);
        }
        else if (command == "remove") {
            int n;
            cin >> n;
            if (n <= numbers.size())
                while (n--)
                    numbers.pop();    
        }
    }
    
    int sum = 0;
    while (numbers.size())
    {
        sum += numbers.top();
        numbers.pop();
    }

    cout << sum << endl;
    

    return 0;
}
