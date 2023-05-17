#include <iostream>
#include <string>
#include <vector>
using namespace std;

void display_vector(vector <string> *v) {
    for (auto name: *v)
        cout << name << " ";
    cout << endl;
}

void display_array(int *arr, int sentinel) {
    while (*arr != sentinel)
    {
        cout << *arr++ << " ";
    }
    cout << endl;
}

int main() {
    vector <string> list_of_names {"Edi", "Kevi"};
    display_vector(&list_of_names);
    cout << "----------------------" << endl;
    int arr[] {34, 45, 56, 67, 78, -1};
    display_array(arr, -1);

    return 0;
}