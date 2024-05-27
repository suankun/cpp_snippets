#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    cin >> n;
    int leftSum=0, rightSum=0;
    
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        leftSum+=num;
    }
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        rightSum+=num;
    }

    int diff = abs(leftSum-rightSum);
    if (diff==0) cout << "Yes, sum = " << leftSum << endl;
    else cout << "No, diff = " << diff << endl;


    return 0;
}
