#include <iostream>
#include <vector>

using namespace std;

int main() {

    // declaring and initializing vector
    vector <int> scores {10, 20, 30};
    cout << "Scores before adding new elements: " << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    // adding elements with variable
    cout << "Please add new element: ";
    int new_score {0};
    cin >> new_score;
    scores.push_back(new_score);

    cout << "Please add another element: ";
    cin >> new_score;
    scores.push_back(new_score);

    cout << "Scores after adding new elements: " << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    cout << scores[3] << endl;
    cout << scores[4] << endl;

    // Print the size of the verctor
    cout << "The size of the vector is " << scores.size() << endl;

    // 2D vector
    vector <vector<int>> timetable {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "First row: " << endl;
    cout << timetable[0][0] << ", " << timetable[0][1] << ", " << timetable[0][2] << ", " << timetable[0][3] << endl;
    cout << timetable.at(1).at(0) << ", " << timetable.at(1).at(1) << ", " << timetable.at(1).at(2) << ", " << timetable.at(1).at(3) << endl;
    cout << "The size of the 2D vector is " << timetable.size();

    return 0;
}