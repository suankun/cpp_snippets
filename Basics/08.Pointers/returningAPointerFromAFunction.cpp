#include <iostream>
using namespace std;

int *init_array(int init_value, size_t size) {
    int *my_array = new int[size];
    for (size_t i {}; i < size; i++) {
        *(my_array+i) = init_value+i;
    }
    return my_array;
}

void display(int *my_array, size_t size) {
    for (size_t i {}; i < size; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;
}

int main() {
    int *my_array {nullptr};
    size_t size {};
    int init_value {};

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the init value: ";
    cin >> init_value;

    my_array = init_array(init_value, size);

    display(my_array, size);

    delete [] my_array;

    return 0;
}