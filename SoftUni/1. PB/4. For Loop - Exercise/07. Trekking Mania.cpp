#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main() {
    int n;
    cin >> n;
    int musala=0, montBlanc=0, kilimanjaro=0, k2=0, everest=0, totalPeople=0;
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        if (num<=5) musala+=num;
        else if (num>=6 && num<=12) montBlanc+=num;
        else if (num>=13 && num<=25) kilimanjaro+=num;
        else if (num>=26 && num<=40) k2+=num;
        else if (num>=41) everest+=num;
        totalPeople+=num;
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << (double(musala)/totalPeople)*100 << "%" << endl;
    cout << (double(montBlanc)/totalPeople)*100 << "%" << endl;
    cout << (double(kilimanjaro)/totalPeople)*100 << "%" << endl;
    cout << (double(k2)/totalPeople)*100 << "%" << endl;
    cout << (double(everest)/totalPeople)*100 << "%" << endl;

    return 0;
}
