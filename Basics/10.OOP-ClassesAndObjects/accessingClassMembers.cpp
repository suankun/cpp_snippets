#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
    string teacher_name;
    string class_name;
    int techer_personal_number;

    void teacher_greeting(string name_of_student) {cout << "Hello " << name_of_student << ", my name is " << teacher_name << "!" << endl;};
};

class Student {
public:
    string student_name;
    int student_personal_number;

    void student_greeting(string name_of_teacher) {cout << "Hello teacher, my name is " << student_name << "!" << " And my personal number is " << student_personal_number << endl;};
};

int main() {
    Teacher Chen;
    Chen.teacher_name = "Chen";
    Chen.class_name = "Sport";
    Chen.techer_personal_number = 123456;
    Chen.teacher_greeting("Kevi");

    Student *Kevi;
    Kevi = new Student;
    Kevi->student_name = "Kevi";
    Kevi->student_personal_number = 456789;
    Kevi->student_greeting("Chen");

    return 0;
}