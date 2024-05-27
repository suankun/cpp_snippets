#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main() {
    string line;
    cin >> line;

    // {} > [] > ()

    bool isValid = true;
    vector<int> stack;
    for (size_t i = 0; i < line.length(); i++) {
        if (line[i] == '{') {
            if (!stack.empty() && (stack[stack.size() - 1] == '[' || stack[stack.size() - 1] == '(')) {
                isValid = false;
                break;
            }
            stack.push_back(line[i]);
        }
        else if (line[i] == '[') {
            if (!stack.empty() && stack[stack.size() - 1] == '(') {
                isValid = false;
                break;
            }
            stack.push_back(line[i]);
        }
        else if (line[i] == '(') {
            stack.push_back(line[i]);
        }
        else if (line[i] == '}') {
            if (stack.empty() || stack[stack.size() - 1] != '{') {
                isValid = false;
                break;
            }
            stack.pop_back();
        }
        else if (line[i] == ']') {
            if (stack.empty() || stack[stack.size() - 1] != '[') {
                isValid = false;
                break;
            }
            stack.pop_back();
        }
        else if (line[i] == ')') {
            if (stack.empty() || stack[stack.size() - 1] != '(') {
                isValid = false;
                break;
            }
            stack.pop_back();
        }
    }

    if (isValid) {
        cout << "valid" << endl;
    }
    else {
        cout << "invalid" << endl;
    }

    return 0;
}
