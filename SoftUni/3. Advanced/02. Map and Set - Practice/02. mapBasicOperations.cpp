// Example 2: size() function
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> mp;

    for (int i = 0; i < 3; i++) {
        mp[i] = i+1;
    }

    // map<int, int>::iterator it = mp.begin();

    // while (it != mp.end())
    // {
    //     cout << it->first << ", " << it->second << endl;
    //     it++;
    // }
    

    cout << "Size of map: " << mp.size() << endl;

    return 0;
}
