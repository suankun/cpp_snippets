// https://www.codewars.com/kata/5e16ffb7297fe00001114824/train/cpp
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> top3(
    const std::vector<std::string>& products,
    const std::vector<int>& amounts,
    const std::vector<int>& prices)
{
    std::vector<int> totals;
    std::vector<std::string> ordered_products;

    // Calculate the total value for each product
    for (size_t i = 0; i < amounts.size(); ++i)
    {
        totals.push_back(amounts[i] * prices[i]);
    }

    // Find the top 3 products with the highest totals
    for (int i = 0; i < 3; ++i)
    {
        auto max_iter = std::max_element(totals.begin(), totals.end());
        int max_index = std::distance(totals.begin(), max_iter);

        ordered_products.push_back(products[max_index]);
        totals[max_index] = -1;  // Mark this total as used by setting it to -1
    }

    return ordered_products;
}
//
#include <string>
#include <vector>

std::vector<std::string> top3(
        const std::vector<std::string>& products,
        const std::vector<int>& amounts,
        const std::vector<int>& prices)
{
    std::vector<std::pair<std::string, int>> result;
    for (int i = 0; i < (int)products.size(); i++)
    {
        result.push_back({ products[i], amounts[i] * prices[i] });
    }
    std::sort(result.begin(), result.end(), [&](auto i, auto j) { return i.second > j.second; });

    return {result[0].first, result[1].first, result[2].first};
}
