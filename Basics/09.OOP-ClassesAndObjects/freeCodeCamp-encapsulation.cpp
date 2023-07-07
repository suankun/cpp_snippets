#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    string Name;
    int ID;

public:
    void studentInfo() {
        cout << ID << ". " << Name << endl; 
    }

    void setName(string name) {Name = name;}
    string getName() {return Name;}
    void setId(int id) {ID = id;}
    int getId() {return ID;}

    Student(string name, int id) {
        Name = name;
        ID = id;
    }
    Student() {
        Name = "unknown";
        ID = -1;
    };
};

int main(){
    Student edmont("Edmont", 1);
    Student ginka("Ginka", 2);
    Student toni;

    ginka.setName("Ginka Kireva");
    toni.setId(3);
    toni.setName("Toni");
    edmont.studentInfo();
    ginka.studentInfo();
    toni.studentInfo();
    
    return 0;
}
