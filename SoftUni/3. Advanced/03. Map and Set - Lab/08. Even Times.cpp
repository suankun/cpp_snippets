#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, unsigned> numbers;

    while (n--)
    {
        int num;
        cin >> num;
        
        numbers[num]++;
    }
    
    for (pair<int, unsigned> n : numbers) {
        if (n.second % 2 == 0)
            cout << n.first << endl;
    }
    
    return 0;
}