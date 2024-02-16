#include <iostream>
using namespace std;

int main() {
    int walkMinutes, walkNumber, caloriesIntake;
    cin >> walkMinutes >> walkNumber >> caloriesIntake;

    int totalCaloriesBurned = walkMinutes * walkNumber * 5;

    if (totalCaloriesBurned * 2 >= caloriesIntake)
        cout << "Yes, the walk for your cat is enough. Burned calories per day: " << totalCaloriesBurned << "." << endl;
    else
        cout << "No, the walk for your cat is not enough. Burned calories per day: " << totalCaloriesBurned << "." << endl;

    return 0;
}
