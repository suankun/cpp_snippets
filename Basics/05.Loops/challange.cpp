#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> list {};
    char selection {};
    do
    {
        cout << "P - Print numbers" << endl;
        cout << "A - Add number" << endl;
        cout << "M - Display the mean or average of the numbers" << endl;
        cout << "S - Display the smalest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter your choice: ";
        cin >> selection;
        
        if (selection == 'P' || selection == 'p') {
            if (list.size() == 0) {
                cout << "[] - list is empty!" << endl;
            } else {
                cout << "[ ";
                for (auto val: list) {
                    cout << val << " ";
                }
                cout << "]" << endl;
            }

            cout << endl;
        } else if (selection == 'A' || selection == 'a') {
            int temp_num {};
            cout << "Enter a number: ";
            cin >> temp_num;
            list.push_back(temp_num);
        } else if (selection == 'M' || selection == 'm') {
            double average {}, sum {};
            if (list.size() == 0) {
                cout << "[] - list is empty, no data!" << endl;
            } else {
                for (auto val: list) {
                    sum += val;
                }
                average = sum/list.size();
                cout << "Average is " << average << endl;
            }
        } else if (selection == 'S' || selection == 's') {
            if (list.size() == 0) {
                cout << "[] - list is empty, no data!" << endl;
            } else {
                int min {list.at(0)};
                for (auto val: list) {
                    if (val < min) {
                        min = val;
                    }
                }
                cout << "Smallest number is " << min << endl;
            }
        } else if (selection == 'L' || selection == 'l') {
            if (list.size() == 0) {
                cout << "[] - list is empty, no data!" << endl;
            } else {
                int max {list.at(0)};
                for (auto val: list) {
                    if (val > max) {
                        max = val;
                    }
                }
                cout << "Largest number is " << max << endl;
            }
        } else if (selection == 'Q' || selection == 'q') {
            cout << "Goodbye!!" << endl;
        } else {
            cout << "Enter a valid choice!" << endl;
        }

    } while (selection != 'Q' && selection != 'q');

    return 0;
}