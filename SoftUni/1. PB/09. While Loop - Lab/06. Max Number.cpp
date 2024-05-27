#include <iostream>
#include <climits>

using namespace std;

int main() {
    string command;
    getline(cin, command);

    int max=INT_MIN;
    while (command!="Stop")
    {
        int temp=stoi(command);
        if (temp>max) max=temp;
        getline(cin, command);
    }
    cout << max << endl;
    
    return 0;
}
