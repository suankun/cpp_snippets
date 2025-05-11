// https://www.codewars.com/kata/57a1ae8c7cb1f31e4e000130/train/cpp

// Implement a function that returns the minimal and the maximal value of a list (in this order).

#include <utility>
#include <vector>
#include <bits/stdc++.h>

std::pair<long, long> get_min_max(const std::vector<long>& seq) {
  
    int min = *min_element(seq.begin(), seq.end());

    int max = *max_element(seq.begin(), seq.end());
  
    return {min, max};
}
//
#include <utility>
#include <vector>

std::pair<long, long> get_min_max(const std::vector<long>& seq) {
    return {*std::min_element(seq.begin(), seq.end()), *std::max_element(seq.begin(), seq.end())};
}
