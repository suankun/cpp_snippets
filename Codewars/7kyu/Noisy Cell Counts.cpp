// https://www.codewars.com/kata/63ebadc7879f2500315fa07e/train/cpp
#include <vector>
std::vector<int> cleaned_counts(const std::vector<int>& data) {
    std::vector<int> res;
    res.push_back(data[0]);
    for (size_t i=1; i<data.size(); i++) {
        if (data[i]<res[i-1]) res.push_back(res[i-1]);
        else res.push_back(data[i]);
    }
    return res;
}
//
std::vector<int> cleaned_counts(const std::vector<int>& data) {
    std::vector<int> correct;
    correct.reserve(data.size());
    for (const int sample: data)
        correct.push_back(std::max(sample, correct.back()));
    return correct;
}
