#include <iostream>
#include <climits>

using namespace std;

int main() {
    string command;
    getline(cin, command);

    int min=INT_MAX;
    while (command!="Stop")
    {
        int temp=stoi(command);
        if (temp<min) min=temp;
        getline(cin, command);
    }
    cout << min << endl;
    
    return 0;
}
