// https://www.codewars.com/kata/65112af7056ad6004b5672f8/train/cpp
#include <iostream>

using namespace std;

#include <vector>

bool possibly_perfect(const std::vector<char>& key, const std::vector<char>& answers)
{
    bool isCorrect;
    size_t i;
    for (i = 0; i < key.size(); i++) {
        if ((key[i] == '_') || (answers[i] == '_')) {
            continue;
        }
        if (key[i] ==  answers[i]) {
            isCorrect = true;
            break;
        }
        else {
            isCorrect = false;
            break;
        }
        
    }

    if (isCorrect) {
        for (i = 0; i < key.size(); i++) {
            if ((key[i] == '_') || (answers[i] == '_')) {
                continue;
            }
            else if (key[i] != answers[i]) {
                return false;
            }
        }
    }
    else {
        for (i = 0; i < key.size(); i++) {
            if ((key[i] == '_') || (answers[i] == '_')) {
                continue;
            }
            else if (key[i] == answers[i]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    cout << possibly_perfect({ 'B', '_', 'B' }, { 'B', 'D', 'C' }) << endl;  // false
    // cout << 
    // possibly_perfect({'T', 'F', 'F', 'F', 'F', 'T', 'T', 'F', '_'}, {'T', 'T', 'F', 'F', 'F', 'F', 'T', 'F', 'F'})
    // << endl;  // false

    return 0;
}
