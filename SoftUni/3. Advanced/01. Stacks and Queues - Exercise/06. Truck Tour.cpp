#include <iostream>
#include <queue>
using namespace std;

bool checkCurrentPetrolStation(queue<int> fuel, queue<int> km) {
    int currFuel = 0;
    while (fuel.size())
    {
        currFuel += fuel.front();
        if (currFuel >= km.front())
            currFuel -= km.front();
        else
            break;

        fuel.pop(); km.pop();
    }

    return !fuel.size();
}

int main() {
    int N;
    cin >> N;

    queue<int> fuel;
    queue<int> km;

    int tmp;
    while (N--)
    {
        cin >> tmp; fuel.push(tmp);
        cin >> tmp; km.push(tmp);
    }
    
    N = 0;
    while (N <= fuel.size())
    {
        if (checkCurrentPetrolStation(fuel, km))
            break;

        
        N++;
        fuel.push(fuel.front()); fuel.pop();
        km.push(km.front()); km.pop();
    }
    
    cout << N << endl;

    return 0;
}
