#include <iostream>
#include <set>

using namespace std;

void readSet(int n, set<int>& s) {
    while (n--)
    {
        int num;
        cin >> num;
        s.insert(num);
    }
    
}

int main() {
    int n, m;
    cin >> n >> m;
    set<int> N, M;

    readSet(n, N);
    readSet(m, M);

    for (int num : N)
        if (M.find(num) != M.end())
            cout << num << " ";

    cout << endl;

    return 0;
}
