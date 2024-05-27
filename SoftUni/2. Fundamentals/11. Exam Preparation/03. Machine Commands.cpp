#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void printVector(const vector<int>& numbers) {
    for (const int& num : numbers) {
        cout << num << endl;
    }
    cout << endl;
}

int main() {
    vector<int> result;
    string command;
    while (cin >> command && command != "end") {
        istringstream iss(command);
        int number;
        if (iss >> number) {
            result.push_back(number);
        }
        else if (command == "sum") {
            int num1 = result[result.size() - 1];
            result.pop_back();

            int num2 = result[result.size() - 1];
            result.pop_back();

            result.push_back(num1 + num2);
        }
        else if (command == "subtract") {
            int num1 = result[result.size() - 1];
            result.pop_back();

            int num2 = result[result.size() - 1];
            result.pop_back();

            result.push_back(num1 - num2);
        }
        else if (command == "concat") {
            string num1 = to_string(result[result.size() - 1]);
            result.pop_back();

            string num2 = to_string(result[result.size() - 1]);
            result.pop_back();

            string res = num2+num1;

            result.push_back(stoi(res));
        }
        else if (command == "discard") {
            result.pop_back();
        }
    }

    printVector(result);

    return 0;
}
