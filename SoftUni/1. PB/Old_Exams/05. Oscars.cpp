#include <iostream>
#include <iomanip>

using std::cin;
using std::string;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    string name, judgeName;
    double academyPt=0.0, judgePt=0.0;
    int n=0;

    getline(cin, name);
    cin >> academyPt;
    cin >> n;
    cin.ignore();

    for (int i=0; i<n; i++) {
        getline(cin, judgeName);
        cin >> judgePt;
        cin.ignore();
        
        double tempPt=(judgeName.length()*judgePt)/2.0;
        academyPt+=tempPt;
        
        if (academyPt>=1250.5) break;
    }

    cout << fixed << setprecision(1);
    if (academyPt>1250.5) cout << "Congratulations, " << name << " got a nominee for leading role with " << academyPt << "!";
    else cout << "Sorry, " << name << " you need " << 1250.5-academyPt << " more!" << endl;

    return 0;
}
