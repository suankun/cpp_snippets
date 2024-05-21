#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    int students;
    cin >> students;
    cin.ignore();

    map< string, vector<double> > studentsGrades;

    while (students--)
    {
        string input;
        getline(cin, input);
        istringstream iss(input);

        string name;
        iss >> name;

        double grade;
        iss >> grade;
        studentsGrades[name].push_back(grade);
    }
    
    cout << fixed << setprecision(2);

    // for (map<string, vector<double>>::iterator itB = studentsGrades.begin(); itB != studentsGrades.end(); itB++)

    for (pair< string, vector<double> > st : studentsGrades)
    {
        cout << st.first << " -> ";

        double avg = 0;
        for (double gr : st.second) {
            cout << gr << ' ';
            avg += gr;
        }

        avg /= st.second.size();

        cout << "(avg: " << avg << ")" << endl;
    }
    

    return 0;
}