#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int age;
    float avgGrade;
    cin >> name >> age >> avgGrade;

    cout << fixed << setprecision(2) << "Name: " << name << ", Age: " << age << ", Grade: " << avgGrade << endl;

    return 0;
}
