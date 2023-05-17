#include <iostream>
using namespace std;

int main() {
    int scores [] {100, 90, 80};
    int *scores_ptr {scores}; // no need of & because the name of the array is pointer itself

    cout << "-------------------------------" << endl;
    for (auto sc: scores)
        cout << sc << " ";
    cout << endl;

    cout << "-------------------------------" << endl;
    cout << scores_ptr[0] << " ";
    cout << scores_ptr[1] << " ";
    cout << scores_ptr[2] << " " << endl;

    cout << "-------------------------------" << endl;
    cout << *(scores+0) << " "; // 0 can be omitted 
    cout << *(scores+1) << " ";
    cout << *(scores+2) << " " << endl;

    cout << "-------------------------------" << endl;
    cout << *(scores_ptr+0) << " "; // 0 can be omitted 
    cout << *(scores_ptr+1) << " ";
    cout << *(scores_ptr+2) << " " << endl;

    return 0;
}