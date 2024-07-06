#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Student {
    
    string name;
    string surname;
    double totalAverage = 0;

    public:

        Student() {}

        Student(istream & istr) {
            read(istr);
        }

        void read(istream & istr);

        string toString();

        double getTotalAverage(void) { return totalAverage; }
};

void Student::read(istream & istr) {
    istr >> name >> surname >> totalAverage;
}

string Student::toString() {
    ostringstream ostr;

    ostr << name << ' ' << surname << ' ' << totalAverage;

    return ostr.str();
}

int main() {

    vector<Student> data;

    int totalStudents;
    cin >> totalStudents;

    if (totalStudents <= 0) {
        cout << "Invalid input" << endl;
        return 0;
    }

    while (totalStudents--)
        data.push_back(Student(cin));
    
    double grandTotalAverage = 0;
    for (Student & curr : data) {
        grandTotalAverage += curr.getTotalAverage();
        cout << curr.toString() << endl;
    }

    grandTotalAverage /= data.size();
    cout << grandTotalAverage << endl;

    return 0;
}
