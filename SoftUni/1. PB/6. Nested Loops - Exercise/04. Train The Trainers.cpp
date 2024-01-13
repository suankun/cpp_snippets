#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    int jugdes, gradesCnt=0;
    string command;
    double studentGrades=0.0, avg=0.0, totalGrade=0.0, totalAvg=0.0;
    cin >> jugdes;
    cin.ignore();
    getline(cin, command);
    
    cout.setf(ios::fixed);
    cout.precision(2);
    while (command!="Finish")
    {
        studentGrades=0.0;
        for (int i=0; i<jugdes; i++) {
            double currGrade;
            cin >> currGrade;
            studentGrades+=currGrade;
            totalGrade+=currGrade;
            gradesCnt++;
        }
        avg=studentGrades/jugdes;
        cout << command << " - " << avg << "." << endl;
        cin.ignore();
        getline(cin, command);
    }

    totalAvg=totalGrade/gradesCnt;
    cout << "Student's final assessment is " << totalAvg << "." << endl;

    return 0;
}
