// https://www.codewars.com/kata/5b662d286d0db722bd000013/train/cpp
#include <string>

bool redacted(const std::string &doc1, const std::string &doc2)
{
    if (doc1.length() != doc2.length())
        return false;
  
    for (size_t i = 0; i < doc1.length(); ++i)
        if ((doc1[i] != doc2[i] && doc1[i] != 'X') || (doc1[i] == 'X' && doc2[i] == '\n'))
            return false;

    return true;
}
//
#include <algorithm>
#include <string>

bool redacted(const std::string& doc1, const std::string& doc2) {
    return doc1.size() == doc2.size() &&
        std::equal(doc1.cbegin(), doc1.cend(), doc2.cbegin(), [](char c1, char c2) {
            return c1 == c2 || c1 == 'X' && c2 != '\n';
        });
}
