#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    int fail, failCnt=0;
    cin >> fail;
    cin.ignore();

    int subjectCnt=0;
    double totalGrades=0.0;
    double avg=0.0;

    string command, lastSubject;
    getline(cin, command);

    while (command!="Enough")
    {
        subjectCnt++;

        double currGrade;
        cin >> currGrade;
        cin.ignore();

        if (currGrade<=4.00) {
            failCnt++;
            if (failCnt==fail) break;
        }

        totalGrades+=currGrade;
        lastSubject=command;
        getline(cin, command);
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    avg=totalGrades/subjectCnt;
    if (command=="Enough") {
        cout << "Average score: " << avg << endl;
        cout << "Number of problems: " << subjectCnt << endl;
        cout << "Last problem: " << lastSubject << endl;
    }
    else {
        cout << "You need a break, " << fail << " poor grades." << endl;
    }

    return 0;
}
