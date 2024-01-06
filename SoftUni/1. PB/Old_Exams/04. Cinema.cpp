#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int capacity=0, total=0;
    cin >> capacity;
    cin.ignore();

    string command;
    getline(cin, command);
    while (command!="Movie time!")
    {
        int temp=stoi(command);
        if (temp>capacity) break;
        capacity-=temp;
        if (temp%3==0) total+=((temp*5)-5);
        else total+=temp*5;
        getline(cin, command);
    }
    
    if (command=="Movie time!") cout << "There are " << capacity << " seats left in the cinema." << endl;
    else cout << "The cinema is full." << endl;
    cout << "Cinema income - " << total << " lv." << endl;

    return 0;
}
