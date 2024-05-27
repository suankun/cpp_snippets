#include <iostream>
#include <stack>
using namespace std;

int maxElt(stack<int> st) {
    int max = st.top(); st.pop();
    while (st.size())
    {
        if (max < st.top())
            max = st.top();
        st.pop();
    }
    return max;
}

int minElt(stack<int> st) {
    int min = st.top(); st.pop();
    while (st.size())
    {
        if (min > st.top())
            min = st.top();
        st.pop();
    }
    return min;
}

int main() {
    int N;
    cin >> N;

    stack<int> st;

    while (N--) {
        int command;
        cin >> command;

        switch (command)
        {
        case 1:
            int number;
            cin >> number;
            st.push(number);
            break;
        case 2:
            if (st.size())
                st.pop();
            break;
        case 3:
            if (st.size())
                cout << maxElt(st) << endl;
            break;
        case 4:
            if (st.size())
                cout << minElt(st) << endl;
            break;
        }
    }

    bool bFirst = true;
    while (st.size())
    {
        if (bFirst)
            bFirst = false;
        else
            cout << ", ";
        cout << st.top();
        st.pop();
    }
    

    return 0;
}
