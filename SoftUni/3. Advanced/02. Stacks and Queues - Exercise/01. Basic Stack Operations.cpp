#include <iostream>
#include <stack>
#include <climits>
using namespace std;

int main() {
    int N, S, X;
    cin >> N >> S >> X;

    stack<int> st;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        st.push(num);
    }

    while (S--)
        st.pop();

    int minNum = INT_MAX;

    if (st.size() == 0)
        minNum = 0;
    
    while (st.size())
    {
        int currNum = st.top(); st.pop();

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
