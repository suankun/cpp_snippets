#include <iostream>
#include <queue>
#include <climits>
using namespace std;

int main() {
    int N, S, X;
    cin >> N >> S >> X;

    queue<int> que;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        que.push(num);
    }

    while (S--)
        que.pop();

    int minNum = INT_MAX;

    if (que.size() == 0)
        minNum = 0;
    
    while (que.size())
    {
        int currNum = que.front(); que.pop();

        if (currNum == X) {
            cout << "true" << endl;
            return 0;
        }

        if (minNum > currNum)
            minNum = currNum;
    }
    
    cout << minNum << endl;
    

    return 0;
}
