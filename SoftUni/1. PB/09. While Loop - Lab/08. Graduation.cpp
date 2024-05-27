#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name;
    cin >> name;

    int grade=0;
    double assessment, totalAssessment=0.0;
    int fail=0;

    while (grade<12)
    {
        cin >> assessment;
        if (assessment<4.00) fail++;
        if (fail>1) break;
        totalAssessment+=assessment;
        grade++;
    }

    double avg=totalAssessment/12.0;
    if (fail<=1) {
        cout << fixed << setprecision(2) << name << " graduated. Average grade: " << avg << endl;
    }
    else {
        cout << name << " has been excluded at " << grade << " grade" << endl;
    }
    
    
    return 0;
}
