// https://www.codewars.com/kata/5b2117eea454c89d4400005f/train/cpp
#include <vector>

std::vector<int> L (int n, int L0, int L1, int add) {
    std::vector<int> res;

    res.push_back(L0);
    res.push_back(L1);

    for (int i = 2; i < n; i++) {
        int next = res[i-1] + res[i-2] + add;
        res.push_back(next);
    }

    return res;
}
//
std::vector<int> L (int n, int L0, int L1, int add)
{
    std::vector<int> result = {L0, L1};

    for(auto i = 2; i < n ; i++)
        result.push_back(result[i-1] + result[i-2] + add);

    return result;
}
