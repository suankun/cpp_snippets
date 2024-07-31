#include <iostream>

using namespace std;

#include <vector>

int main() {
    /////----- int -----/////
    // poiter to 10 int numbers
    int * num1 = new int[10];

    // delete
    delete[] num1;

    // array of pointers
    int * num2[10];
    for (int i = 0; i < 10; i++)
        num2[i] = new int;

    // delete
    for (int i = 0; i < 10; i++)
        delete num2[i];

    /////----- string -----/////
    // pointer to an array of strings
    string * st1 = new string[5];

    // delete
    delete [] st1;

    // array of vector pointers
    string * st2[5];
    for (int i = 0; i < 5; i++)
        st2[i] = new string;

    // delete
    for (int i = 0; i < 5; i++)
        delete st2[i];


    /////----- vector -----/////
    // poiter to array of vectors
    const int arraySize = 3;
    std::vector<int> * vec1 = new std::vector<int>[arraySize];

    // delete
    delete[] vec1;

    // array of vector pointers
    std::vector<int> * vec2[10];
    for (int i = 0; i < 10; i++)
        vec2[i] = new std::vector<int>;

    // delete
    for (int i = 0; i < 10; i++)
        delete vec2[i];


    return 0;
}