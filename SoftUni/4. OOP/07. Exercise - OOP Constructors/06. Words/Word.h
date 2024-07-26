#ifndef _WORD_H_
#define _WORD_H_

#include <string>

class Word {
    std::string word;
    mutable int count;

public:
    Word(const std::string & word) : word(word), count(1) {}

	const std::string getWord() const { return word; }

    const int & getCount() const { return count; }

    bool operator<(const Word & other) const {
        if (other.word == word)
            count++;

        return word < other.word;
    }

};





#endif  // _WORD_H_