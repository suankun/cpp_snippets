// https://www.codewars.com/kata/5616868c81a0f281e500005c/train/cpp

// To participate in a prize draw each one gives his/her firstname.

// Each letter of a firstname has a value which is its rank in the English alphabet. A and a have rank 1, B and b rank 2 and so on.

// The length of the firstname is added to the sum of these ranks hence a number som.

// An array of random weights is linked to the firstnames and each som is multiplied by its corresponding weight to get what they call a winning number.

// Example:
// names: "COLIN,AMANDBA,AMANDAB,CAROL,PauL,JOSEPH"
// weights: [1, 4, 4, 5, 2, 1]

// PauL -> som = length of firstname + 16 + 1 + 21 + 12 = 4 + 50 -> 54
// The *weight* associated with PauL is 2 so PauL's *winning number* is 54 * 2 = 108.
// Now one can sort the firstnames in decreasing order of the winning numbers. When two people have the same winning number sort them alphabetically by their firstnames.

// Task:
// parameters: st a string of firstnames, we an array of weights, n a rank

// return: the firstname of the participant whose rank is n (ranks are numbered from 1)

// Example:
// names: "COLIN,AMANDBA,AMANDAB,CAROL,PauL,JOSEPH"
// weights: [1, 4, 4, 5, 2, 1]
// n: 4

// The function should return: "PauL"
// Notes:
// The weight array is at least as long as the number of names, it may be longer.

// If st is empty return "No participants".

// If n is greater than the number of participants then return "Not enough participants".

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cctype>

class Rank
{
public:
    static std::string nthRank(const std::string &st, std::vector<int> &we, int n);
};

int nameWeight(const std::string &name)
{
    int weight = name.length();
    for (char c : name)
    {
        weight += std::tolower(c) - 'a' + 1;
    }
    return weight;
}

std::string Rank::nthRank(const std::string &st, std::vector<int> &we, int n)
{
    if (st.empty()) return "No participants";
    
    std::vector<std::string> names;
    std::string name;
    for (char c : st)
    {
        if (c == ',')
        {
            names.push_back(name);
            name.clear();
        }
        else
        {
            name += c;
        }
    }
    if (!name.empty()) names.push_back(name);

    if (n > names.size()) return "Not enough participants";

    std::map<std::string, int> ranks;
    for (size_t i = 0; i < names.size(); ++i)
    {
        ranks[names[i]] = nameWeight(names[i]) * we[i];
    }

    std::vector<std::pair<std::string, int>> sortedRanks(ranks.begin(), ranks.end());
    std::sort(sortedRanks.begin(), sortedRanks.end(), [](const auto &a, const auto &b) {
        if (a.second != b.second) 
            return a.second > b.second;
        return a.first < b.first;
    });

    std::vector<std::string> sortedNames;
    for (const auto &p : sortedRanks)
    {
        sortedNames.push_back(p.first);
    }

    return sortedNames[n - 1];
}

int main()
{
    std::string st = "John,James,Jackie";
    std::vector<int> we = {2, 3, 1};
    int n = 2;

    std::cout << Rank::nthRank(st, we, n) << std::endl;

    return 0;
}
//
#include <string>
#include <vector>
#include <sstream>
#include <utility>
#include <algorithm>
#include <ctime>
#include <chrono>
#include <random>

class Rank
{
private:
    static std::vector<std::string> split(const std::string &s);
    static bool compare(const std::pair<std::string, long long> &s1, const std::pair<std::string, long long> &s2);
public:
    static std::string nthRank(const std::string &st, std::vector<int> &we, int n);
};

std::vector<std::string> Rank::split(const std::string &s)
{
    std::vector<std::string> out;
    std::istringstream ss(s);
    std::string next;
    while (std::getline(ss, next, ','))
        out.push_back(next);
    return out;
}
bool Rank::compare(const std::pair<std::string, long long> &s1, const std::pair<std::string, long long> &s2)
{
    long long w1 = s1.second; long long w2 = s2.second;
    if (w1 == w2) return s1.first < s2.first;
    return w1 > w2;
}
std::string Rank::nthRank(const std::string &st, std::vector<int> &we, int n)
{
    if (st == "") return "No participants";
    std::vector<std::string> names = split(st);
    if (n > static_cast<int>(names.size())) return "Not enough participants";

    std::vector<std::pair <std::string, long long>> persons;
    for (unsigned int i = 0; i < names.size(); i++)
    {
        unsigned int weight = names[i].length();
        for (auto ch : names[i])
            weight += std::toupper(ch) - 64;
        persons.push_back(std::make_pair(names[i], static_cast<long long>(weight * we[i])));
    }
    std::sort (persons.begin(), persons.end(), compare);
    return persons[n - 1].first;
}
