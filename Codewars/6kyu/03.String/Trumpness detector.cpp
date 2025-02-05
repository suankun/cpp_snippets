// https://www.codewars.com/kata/57829376a1b8d576640000d6/train/cpp

// We all love the future president (or Führer or duce or sōtō as he could find them more fitting) donald trump, but we might fear that some of his many fans like John Miller or John Barron are not making him justice, sounding too much like their (and our as well, of course!) hero and thus risking to compromise him.

// For this reason we need to create a function to detect the original and unique rhythm of our beloved leader, typically having a lot of extra vowels, all ready to fight the establishment.

// The index is calculated based on how many vowels are repeated more than once in a row and dividing them by the total number of vowels a petty enemy of America would use.

// For example:

// trump_detector("I will build a huge wall") == 0 // definitely not our trump: 0 on the trump score
// trump_detector("HUUUUUGEEEE WAAAAAALL") == 4 // 4 extra "U", 3 extra "E" and 5 extra "A" on 3 different vowel groups: 12/3 make for a trumpy trumping score of 4: not bad at all!
// trump_detector("listen migrants: IIII KIIIDD YOOOUUU NOOOOOOTTT") == 1.56 // 14 extra vowels on 9 base ones
// Notes: vowels are only the ones in the patriotic group of "aeiou": "y" should go back to Greece if she thinks she can have the same rights of true American vowels; there is always going to be at least a vowel, as silence is the option of coward Kenyan/terrorist presidents and their friends.

// Round each result by two decimal digits: there is no place for small fry in Trump's America.

#include <iostream>
#include <string>
#include <algorithm>
using std::ios;

using namespace std;

float trump_detector(const std::string &trump_speech)
{

    int totalNumberOfVowels = 0, extraVowels = 0;
    std::string vowels = "aouei";

    bool isFirstOcc = true;
    for (int i = 0; i < trump_speech.length(); i++) {
        if (find(vowels.begin(), vowels.end(), tolower(trump_speech[i])) != vowels.end()) {
            if (isFirstOcc || tolower(trump_speech[i]) != tolower(trump_speech[i - 1])) {
                totalNumberOfVowels++;
                isFirstOcc = false;
            }
            else {
                extraVowels++;
            }
        }
        else {
            isFirstOcc = true;
        }

    }


    std::cout.setf(ios::fixed);
    std::cout.precision(2);
    return (float)extraVowels / totalNumberOfVowels;
}

int main() {


    cout << trump_detector("I will build a huge wall") << endl;  //                        0.00
    cout << trump_detector("HUUUUUGEEEE WAAAAAALL") << endl;  //                           4.00
    cout << trump_detector("MEXICAAAAAAAANS GOOOO HOOOMEEEE") << endl;  //                 2.50
    cout << trump_detector("America NUUUUUKEEEE Oooobaaaamaaaaa") << endl;  //             1.89
    cout << trump_detector("listen migrants: IIII KIIIDD YOOOUUU NOOOOOOTTT") << endl;  // 1.56

    return 0;
}
//
#include <string>
#include <regex>
#include <cmath>

float trump_detector(const std::string &trump_speech)
{
    int sum = 0, n = 0;
    std::regex re("([aeiou])\\1*", std::regex::icase);
    for (auto it = std::sregex_iterator(trump_speech.begin(), trump_speech.end(), re); it != std::sregex_iterator(); it++) {
        n++;
        sum += it->length() - 1;
    }
    return n ? std::round(sum * 100.0 / n) / 100 : 0;
}