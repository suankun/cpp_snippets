#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    stack<int> clothes;

    istringstream iss(line);
    int tmp;
    while (iss >> tmp)
        clothes.push(tmp);

    int rackCapacity;
    cin >> rackCapacity;

    int racks = 1, currRackCapacity = rackCapacity;
    while (clothes.size())
    {
        tmp = clothes.top(); clothes.pop();
        if (currRackCapacity < tmp) {
            currRackCapacity = rackCapacity;
            racks++;
        }
        currRackCapacity -= tmp;
    }
    
    cout << racks << endl;

    return 0;
}
