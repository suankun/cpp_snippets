// https://www.codewars.com/kata/5680781b6b7c2be860000036/train/cpp
#include <vector>
#include <string>

std::vector<int> vowelIndices(const std::string& word)
{
    std::vector<int> res;
    std::string vowels {"aoueiAOUEIyY"};
    for (size_t i {}; i<word.size(); i++) {
        for (size_t j {}; j<vowels.length(); j++) {
            if (word[i] == vowels[j]) res.push_back(i+1);
        }
    }
    return res;
}
