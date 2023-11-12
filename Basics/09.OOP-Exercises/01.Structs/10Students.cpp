#include <iostream>
#include <iomanip>
using namespace std;

int k;                   
const int SIZE = 12;     
const int SIZE_MAX1 = 10;

const int SIZE_MAX2 = 25;

struct Student
{
    int fac_n;     
    char name[SIZE];
    double subjects[SIZE_MAX1];
};

void create_student(Student& s)
{
    do
    {
        cout << "Фaculty number: ";
        cin >> s.fac_n;
    } while(s.fac_n <= 0 || s.fac_n > 99999);

    cout << "Family name: "; cin >> s.name;
    for(int i = 0; i < k; i++)
    {
        cout << "Grade in " << i+1 << "th subject: ";
        cin >> s.subjects[i];
    }
}

void print_student(const Student& s)
{
    cout << setw(5) << s.fac_n
         << setw(SIZE+2) << s.name;
    for(int i = 0; i < k; i++)
        cout << setw(5) << s.subjects[i];
}

double result(const Student& s)
{
    double u = 0;
    for(int i = 0; i < k; i++)
        u += s.subjects[i];
    u /= k;
    return u;
}

int main()
{
    do
    { 
        cout << "Enter number of study subject from 1 to " 
             << SIZE_MAX1 << ": ";
        cin >> k;
    } while (k < 1 || k > SIZE_MAX1);

    int n;
    do
    { 
        cout << "Enter number of students from 1 to "
             << SIZE_MAX2 << ": ";
        cin >> n;
    } while (n < 1 || n > SIZE_MAX2);

    Student s[SIZE_MAX2];
    Student* ps[SIZE_MAX2];

    return 0;
}
