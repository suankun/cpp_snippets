#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2;
    cin >> word1 >> word2;

    int sum = 0, index = 0;
    while (word1.length() > index || word2.length() > index)
    {
        int multiplier1, multiplier2;

        index >= word1.length() ? multiplier1 = 1 : multiplier1 = word1[index];
        index >= word2.length() ? multiplier2 = 1 : multiplier2 = word2[index];
        
        sum += multiplier1 * multiplier2;
        index++;
    }
    
    cout << sum << endl;

    return 0;
}
