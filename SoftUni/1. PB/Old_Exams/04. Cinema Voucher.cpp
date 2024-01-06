#include <iostream>
using namespace std;

int main() {
    int voucher=0, tickets=0, stuff=0;
    cin >> voucher;
    cin.ignore();

    string item;
    getline(cin, item);
    while (item!="End")
    {
        if (item.length()>8) {
            if (voucher<item[0]+item[1]) break;
            else voucher-=item[0]+item[1];
            tickets++;
        }
        else {
            if (voucher<item[0]) break;
            else voucher-=item[0];
            stuff++;
        }

        getline(cin, item);
    }
    
    cout << tickets << endl;
    cout << stuff   << endl;

    return 0;
}
