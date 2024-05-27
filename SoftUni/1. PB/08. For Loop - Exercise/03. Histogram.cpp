#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main() {
    int n;
    cin >> n;
    int p1=0, p2=0, p3=0, p4=0, p5=0;
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        if (num<200) p1++;
        else if (num>=200 && num<400) p2++;
        else if (num>=400 && num<600) p3++;
        else if (num>=600 && num<800) p4++;
        else if (num>=800) p5++;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << (double(p1)/n)*100 << "%" << endl;
    cout << (double(p2)/n)*100 << "%" << endl;
    cout << (double(p3)/n)*100 << "%" << endl;
    cout << (double(p4)/n)*100 << "%" << endl;
    cout << (double(p5)/n)*100 << "%" << endl;

    return 0;
}
