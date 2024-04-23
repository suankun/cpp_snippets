#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Wallpaper
{
public:
    static string wallPaper(double l, double w, double h)
    {
        vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve","thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};

        if (l == 0 || w == 0 || h == 0) return numbers[0];

        double rollWidthNum = (2.0 * (w / 0.52)) + (2.0 * (l / 0.52));
        double rollHeightNum = rollWidthNum * h * 1.15;

        int total = ceil(rollHeightNum / 10);

        return numbers[total];
    }
};

int main() {
        cout << Wallpaper::wallPaper(6.3, 4.5, 3.29) << endl;  // "sixteen"
        cout << Wallpaper::wallPaper(7.8, 2.9, 3.29) << endl;  // "sixteen"
        cout << Wallpaper::wallPaper(6.3, 5.8, 3.13) << endl;  // "seventeen"
        cout << Wallpaper::wallPaper(6.1, 6.7, 2.81) << endl;  // "sixteen"
        cout << Wallpaper::wallPaper(0.0, 5.4, 3.33) << endl;  // "zero"
        cout << Wallpaper::wallPaper(6.1, 2, 3.15) << endl;    // "twelve"
        cout << Wallpaper::wallPaper(4.4, 4.7, 3.26) << endl;  // "fourteen"

    return 0;
}
