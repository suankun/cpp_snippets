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

void create_group(int n, Student *s)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Data for " << i+1 << "-th student: ";
        create_student(s[i]);
    }
}

void print_table()
{
    cout << setiosflags(ios::fixed|ios::showpoint)
         << setprecision(2);
    int i;
    for(i = 0; i < 5+SIZE+2+5*(k+1)+1; i++)
        cout << "=";
    cout << endl;
    cout << setw(5) << "F.N."
         << setw(SIZE+2) << "Family name";

    for(i = 0; i < k; i++)
        cout << setw(4) << "Dis-" << i+1;
    cout << setw(6) << "Avr.gr." << endl;
    for(i = 0; i < 5+SIZE+2+5*(k+1)+1; i++)
        cout << "=";
    cout << endl;
}

void print_group(int n, Student *s)
{
    print_table();
    int i, j;

    double temp[SIZE_MAX1] = {0, };
    for(j = 0; j < k; j++)
    {
        for(i = 0; i < n; i++)
            temp[j] = temp[j] + s[i].subjects[j];
        temp[j] = temp[j]/n;
    }

    double sum = 0;
    for(i = 0; i < n; i++)
    {
        print_student(s[i]);
        double res = result(s[i]);
        sum += res;
        cout << setw(6) << res << endl;
    }
    for(i = 0; i < 5+SIZE+2+5*(k+1)+1; i++)
        cout << "=";

    cout << endl << setw(5+SIZE+2+5) << temp[0];
    for(j = 1; j < k; j++)
        cout << setw(5) << temp[j];
    cout << setw(6) << sum/n << endl;
}

void sortgroup(int n, Student **s)
{
    for(int i = 0; i < n-1; i++)
    {
        int k = i;
        double max = result(*s[k]);
        for(int j = i+1; j < n; j++)
        { 
            double d = result(*s[j]);
            if(d > max)
            { 
                max = d;
                k = j;
            }
        }
        Student* x;
        x = s[i]; s[i] = s[k]; s[k] = x;
    }
}

void print_sort_group(int n, Student **s)
{
    print_table();
    for(int i = 0; i < n; i++)
    {
        print_student(*s[i]);
        double res = result(*s[i]);
        cout << setw(6) << res << endl;
    }
}

int main()
{
    do
    { 
        cout << "Enter number of study subjects from 1 to " 
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

    create_group(n, s);

    print_group(n, s);
    
    for(int i = 0; i < n; i++)
        ps[i] = &s[i];
    
    sortgroup(n, ps);
    cout << endl;

    print_sort_group(n, ps);

    return 0;
}
