#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> readVector(const string& line) {
    istringstream iss(line);
    vector<string> numbers;
    string currentNum;
    while (iss >> currentNum) {
        numbers.push_back(currentNum);
    }
    return numbers;
}

char compare(const string& num1, const string& num2) {
    char result;
    if (num1 == num2) {
        result = '=';
    }
    else if (num1.length() > num2.length()) {
        result = '<';
    }
    else if (num1.length() < num2.length()) {
        result = '>';
    }
    else if (num1 > num2)
    {
        result = '<';
    }
    else if (num1 < num2)
    {
        result = '>';
    }
    return result;
}

int main() {
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);

    vector<string> numbers1 = readVector(line1);
    vector<string> numbers2 = readVector(line2);

    string result;
    for (size_t i = 0; i < max(numbers1.size(), numbers2.size()); i++) {
        if (i < numbers1.size() && i < numbers2.size()) {
            result += compare(numbers1[i], numbers2[i]);
        } else if (i < numbers1.size()) {
            result += '+';
        } else {
            result += '-';
        }
    }

    cout << result << endl;

    return 0;
}
