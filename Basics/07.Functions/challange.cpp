#include <iostream>
#include <vector>
using namespace std;

void print_select_menu();
char select();
void print_numbers(vector <int> &list);
void add_number(vector <int> &list);
void mean_number(vector <int> &list);
void min_number(vector <int> &list);
void max_number(vector <int> &list);
void print_quit_message();
void print_wrong_input_message();

int main() {
    vector <int> list {};
    char choice {};
    do
    {
        print_select_menu();
        choice = select();
        if (choice == 'P' || choice == 'p') {
            print_numbers(list);
        } else if (choice == 'A' || choice == 'a') {
            add_number(list);
        } else if (choice == 'M' || choice == 'm') {
            mean_number(list);
        } else if (choice == 'S' || choice == 's') {
            min_number(list);
        } else if (choice == 'L' || choice == 'l') {
            max_number(list);
        } else if (choice == 'Q' || choice == 'q') {
            print_quit_message();
        } else {
            cout << "Enter a valid choice!" << endl;
        }
    } while (choice != 'Q' && choice != 'q');

    return 0;
}

void print_select_menu() {
    cout << "P - Print numbers" << endl;
    cout << "A - Add number" << endl;
    cout << "M - Display the mean or average of the numbers" << endl;
    cout << "S - Display the smalest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
}

char select() {
    char selection {};
    cout << "Enter your choice: ";
    cin >> selection;
    return selection;
}

void print_numbers(vector <int> &list) {
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
}

void add_number(vector <int> &list) {
    int temp_num {};
    cout << "Enter a number: ";
    cin >> temp_num;
    list.push_back(temp_num);
}

void mean_number(vector <int> &list) {
    double sum {};
    cout.precision(3);
    if (list.size() == 0) {
        cout << "[] - list is empty";
    } else {
        for (auto num: list)
            sum += num;
        cout << "Average is " << sum/list.size() << endl;
    }
}

void min_number(vector <int> &list) {
    int min {list.at(0)};
    if (list.size() == 0) {
        cout << "[] - list is empty";
    } else {
        for (auto num: list) {
            if (min > num)
                min = num;
        }
        cout << "Min number is " << min << endl;
    }
}

void max_number(vector <int> &list) {
    int max {list.at(0)};
    if (list.size()==0) {
        cout << "[] - list is empty";
    } else {
        for (auto num: list) {
            if (max < num)
                max = num;
        }
        cout << "Max number is " << max << endl;
    }
}

void print_quit_message() {
    cout << "Goodbye!!" << endl;
}

void print_wrong_input_message() {
    cout << "Enter a valid choice!" << endl;
}
