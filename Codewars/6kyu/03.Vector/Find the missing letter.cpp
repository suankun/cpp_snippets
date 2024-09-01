// https://www.codewars.com/kata/5839edaa6754d6fec10000a2/train/cpp
#include <vector>
#include <algorithm>

int getLetterPosition(char letter) {
    return static_cast<int>(letter);
}

std::vector<int> numberRange(int start, int end) {
    std::vector<int> range(end - start);
    for (int i = 0; i < end - start; ++i) {
        range[i] = i + start;
    }
    return range;
}

int getMissingNumber(const std::vector<int>& array) {
    std::vector<int> arraySort = array;
    std::sort(arraySort.begin(), arraySort.end());

    int numberMissing = -1;
    std::vector<int> range = numberRange(arraySort[0], arraySort[arraySort.size() - 1] + 1);

    for (int num : range) {
        if (std::find(arraySort.begin(), arraySort.end(), num) == arraySort.end()) {
            numberMissing = num;
            break;
        }
    }

    return numberMissing;
}

char findMissingLetter(const std::vector<char>& chars) {
    std::vector<int> letterPositions;
    for (char el : chars) {
        letterPositions.push_back(getLetterPosition(el));
    }

    int numberMissing = getMissingNumber(letterPositions);

    return static_cast<char>(numberMissing);
}
//
#include <vector>

char findMissingLetter(const std::vector<char>& chars)
{
    
    for (int i {0}; i < chars.size() ; i++)
        if ( i > 0 )
            if ( chars[i-1] +1 != chars[i] )
                return chars[i-1] +1;
    
}
