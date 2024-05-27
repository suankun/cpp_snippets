#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int h_exam, m_exam, h_arrival, m_arrival, diff, h_diff, m_diff;
    cin >> h_exam >> m_exam >> h_arrival >> m_arrival;

    int totalMinExam=(h_exam*60)+m_exam;
    int totalMinArrival=(h_arrival*60)+m_arrival;

    diff=totalMinExam-totalMinArrival;

    if (diff>30) cout << "Early" << endl;
    else if (diff>=0) cout << "On time" << endl;
    else cout << "Late" << endl;

    if (diff!=0) {
        int absDiff=abs(diff);
        if (absDiff<60) {
            cout << absDiff << " minutes";
        }
        else {
            h_diff=absDiff/60;
            m_diff=absDiff%60;

            cout << h_diff << ":" << string(m_diff<10, '0') << m_diff << " hours";
        }
        if (diff>0) {
            cout << " before";
        }
        else {
            cout << " after";
        }

        cout << " the start" << endl;
    }

    return 0;
}
