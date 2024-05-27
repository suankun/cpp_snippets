#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

int main() {
    int n;
    cin >> n;

    for (int i=1111; i<=9999; i++) {
        bool isSpecial=true;
        string tempNum=to_string(i);
        for (int j=0; j<tempNum.length(); j++) {
            int num=tempNum[j]-'0';
            if (num==0 || n%num!=0) {
                isSpecial=false;
                break;
            }
        }
        if (isSpecial) cout << i << ' ';
    }

    return 0;
}
