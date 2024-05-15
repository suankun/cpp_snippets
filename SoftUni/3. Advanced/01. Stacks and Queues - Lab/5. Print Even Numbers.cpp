#include <iostream>
#include <queue>
#include <string>
#include <sstream>
using namespace std;



int main() {
    string line;
    getline(cin, line);

    queue<int> numbers;

    istringstream iss(line);
    int num;
    while(iss >> num)
        numbers.push(num);

    int currNum;
    bool isFirst = true;
    while (numbers.size()) {
        currNum = numbers.front(); numbers.pop();

        if (currNum % 2 == 0) {
            if (!isFirst)
                cout << ", ";
            else
                isFirst = false;
            cout << currNum;
        }
    }
    

    return 0;
}
