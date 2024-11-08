// https://www.codewars.com/kata/672095ce9b35bb3a2f007e10/train/cpp

// Your teacher knows you've done some programming, and has tasked you with creating a program that calculates the N best students in the class.

// You will be given an array students with the names of the students in the class, and a 2 dimensional array grades, containing the grades of the corresponding students.

// Ex.

// students = {"Ben", "Jane"}
// grades = {{75, 80}, {77, 89}}

// Bens grades = 75, 80
// Jane's grades = 77, 89
// Your program should return an array of the names of the n highest scoring students based on the average of their grades. Return students in decreasing order (highest grade to lowest grade).

// n >= 1
// students.size() == grades.size()
// You can assume that you will be given valid input, i.e.

// students and grades will never be empty
// n will never be greater than the number of students
// students will all have the same number of grades to calculate
// students grade averages will be unique

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <numeric>

using namespace std;

std::vector<std::string> nBestStudents(std::vector<std::string> students, std::vector<std::vector<float>> grades, int n) {
    std::map<float, std::string, std::greater<float>> studentGrades;

    for (size_t curStudent = 0; curStudent < students.size(); curStudent++) {

        float sumGrades = std::accumulate(grades[curStudent].begin(), grades[curStudent].end(), 0.0f);
        float avgGrade = sumGrades / grades.size();

        studentGrades.insert(make_pair(avgGrade, students[curStudent]));
        
    }

    std::vector<std::string> topStudents;
    int topStudentsNumber = 0;
    for (auto it = studentGrades.begin(); it != studentGrades.end() && topStudentsNumber < n; it++) {
        topStudents.push_back(it->second);
        topStudentsNumber++;
    }

    return topStudents;
}

void print(const std::vector<std::string> & v) {
    for (const string & name : v )
        cout << name << ' ';
    cout << endl;
}

int main() {
    std::vector<std::string> v;

    v = nBestStudents({"Ben", "Kai"}, {{75, 80}, {77, 89}}, 1);
    print(v); // {"Kai"}

    v = nBestStudents({"Dave", "Lisa", "Jen"},
                                  {{60, 65, 70}, {71, 88, 76}, {81, 82, 88}}, 2);
    print(v); // {"Jen", "Lisa"}

    v = nBestStudents({"Katie"}, {{66, 74, 71}}, 1);
    print(v); // {"Katie"}

    return 0;
}
