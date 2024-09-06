// https://www.codewars.com/kata/5a33ec23ee1aaebecf000130/train/cpp
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

std::string countFeelings(std::string s, std::vector<std::string> arr)
{

    int countFeelings = 0;

    for (std::string f : arr) {

        std::string tempS = s;
        bool isFellingFound = true;

        for (char ch : f) {

            size_t index = tempS.find(ch);

            if (index != std::string::npos)
                tempS.erase(index, 1);
            else {
                isFellingFound = false;
                break;
            }
        }

        if (isFellingFound)
            countFeelings++;

    }

    std::ostringstream ostr;
    ostr << countFeelings << " feeling";

    if (countFeelings != 1)
        ostr << "s";

    ostr << ".";


    return ostr.str();
}

int main() {
    cout << countFeelings("yliausoenvjw", {"anger", "awe", "joy", "love", "grief"}) << endl;               // "3 feelings."
    cout << countFeelings("angerw", {"anger", "awe", "joy", "love", "grief"}) << endl;                     // "2 feelings."
    cout << countFeelings("griefgriefgrief", {"anger", "awe", "joy", "love", "grief"}) << endl;            // "1 feeling."
    cout << countFeelings("abcdkasdfvkadf", {"desire", "joy", "shame", "longing", "fear"}) << endl;        // "0 feelings."
    cout << countFeelings("abcdkasdfvkadflongin", {"desire", "joy", "shame", "longing", "fear"}) << endl;  // "0 feelings."

    return 0;
}
