#include <iostream>
#include <iomanip>
#include <float.h>  // for DBL_MIN and DBL_MAX
using namespace std;

int main() {
    string movieHighestRating, movieLowestRating;
    double highestRating=DBL_MIN, lowestRating=DBL_MAX;
    double sum=0.0;

    int movieCnt=0;
    cin >> movieCnt;
    cin.ignore();

    string movieName;
    double rating=0.0;

    for (int i=0; i<movieCnt; i++) {
        getline(cin, movieName);
        cin >> rating;
        cin.ignore();
        sum+=rating;

        if (rating>highestRating) {
            movieHighestRating=movieName;
            highestRating=rating;
        }
        
        if (rating<lowestRating) {
            movieLowestRating=movieName;
            lowestRating=rating;
        }
    }

    cout << fixed << setprecision(1) << movieHighestRating << " is with highest rating: " << highestRating << endl;
    cout << fixed << setprecision(1) << movieLowestRating << " is with lowest rating: " << lowestRating << endl;
    cout << fixed << setprecision(1) << "Average rating: " << sum/movieCnt << endl;


    return 0;
}
