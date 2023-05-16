#include <iostream>
using namespace std;

void print_array(int numbers [], size_t size) {
    for (size_t i {}; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void set_array(int numbers [], size_t size, size_t new_num) {
    for (size_t i {}; i < size; i++) {
        numbers[i] = new_num;
    }
}

int main() {
    int nums[] {5, 6, 7, 8, 9};
    int size {5};

    print_array(nums, size);
    set_array(nums, size, 11);
    print_array(nums, size); // arrays are passed by reference

    return 0;
}