#include <iostream>
using namespace std;

void print(int *arr, size_t size) {
    for (size_t i {}; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int *apply_all(int *arr1, size_t size_arr1, int *arr2, size_t size_arr2) {
    int *result_arr {};
    result_arr = new int[size_arr1 * size_arr2];
    int index {};
    for (size_t i {}; i < size_arr1; i++) {
        for (size_t j {}; j < size_arr2; j++) {
            result_arr[index] = arr1[i]*arr2[j];
            index++;
        }
    }
    return result_arr;
}

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};

    int array1 [] {1, 2, 3, 4, 5};
    int array2 [] {10, 20, 30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: ";
    print(results, results_size);

    delete [] results;

    return 0;
}