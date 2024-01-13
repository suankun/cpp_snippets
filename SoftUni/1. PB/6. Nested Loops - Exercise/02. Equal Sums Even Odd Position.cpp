#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

int main() {
    int start, end;
    cin >> start >> end;

    for (int i=start; i<=end; i++) {
        string temp = to_string(i);
        int sumEven=0, sumOdd=0;
        for (int j=0; j<temp.length(); j++) {
            int num = temp[j]-'0';
            j%2==0 ? sumEven+=num : sumOdd+=num;
        }
        if (sumEven==sumOdd) cout << temp << " ";
    }

    return 0;
}
