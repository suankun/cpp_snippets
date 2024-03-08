#include <iostream>
using namespace std;

string printGrade(double grade) {
    string res = "";

    if (grade >= 5.50) res = "Excellent";
    else if (grade >= 4.50) res = "Very good";
    else if (grade >= 3.50) res = "Good";
    else if (grade >= 3.00) res = "Poor";
    else if (grade >= 2.00) res = "Fail";

    return res;
}

int main() {
    double grade;
    cin >> grade;
	cout << printGrade(grade) << endl;

    return 0;
}
