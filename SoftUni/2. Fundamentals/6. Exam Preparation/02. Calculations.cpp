#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

bool isNumber(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int main() {
    int previous = 0, current = 0;
    string line;
    getline(cin, line);
    istringstream iss(line);
    
    vector<string> input;
    string currPosition;
    while (iss >> currPosition) {
        input.push_back(currPosition);
    }

    for (size_t i = 0; i < input.size(); i++)
    {
        if (isNumber(input[i])) {
            int temp = current;
            current = stoi(input[i]);
            previous = temp;
        }
        else if (input[i] == "+") {
            int temp = current;
            current = previous + current;
            previous = temp;
        }
        else if (input[i] == "-") {
            int temp = current;
            current = previous - current;
            previous = temp;
        }
        else if (input[i] == "*") {
            int temp = current;
            current = previous * current;
            previous = temp;
        }
        else if (input[i] == "/") {
            int temp = current;
            current = previous / current;
            previous = temp;
        }
    }
    
    cout << current << ' ' << previous << endl;

    return 0;
}
