// https://www.codewars.com/kata/597ef546ee48603f7a000057/train/cpp

// Return the most profit from stock quotes.

//  Stock quotes are stored in an array in order of date. The stock profit is the difference in prices in buying and selling stock. Each day, you can either buy one unit of stock, sell any number of stock units you have already bought, or do nothing. Therefore, the most profit is the maximum difference of all pairs in a sequence of stock prices.

// @param {array} quotes
// @return {number} max profit
// Example:

//  [ 1, 2, 3, 4, 5, 6 ]        => 15  (buy at 1,2,3,4,5 and then sell all at 6)
//  [ 6, 5, 4, 3, 2, 1 ]        => 0   (nothing to buy for profit)
//  [ 1, 6, 5, 10, 8, 7 ]       => 18  (buy at 1,6,5 and sell all at 10)
//  [ 1, 2, 10, 3, 2, 7, 3, 2 ] => 26  (buy at 1,2 and sell them at 10. Then buy at 3,2 and sell them at 7)

#include <iostream>
#include <vector>

using namespace std;

int most_profit(const std::vector<int>& quotes)
{
    std::vector<int> curQuotes;
    int totalProfit = 0;

    for (size_t q = 0; q < quotes.size(); q++) {
        bool higherQ = false;
        
        for (size_t max = q + 1; max < quotes.size(); max++)
            if (quotes[max] > quotes[q]) {
                higherQ = true;
                break;
            }

        if (higherQ)
            curQuotes.push_back(quotes[q]);
        else {
            for (int qu : curQuotes)
                totalProfit += (quotes[q] - qu);

            curQuotes.erase(curQuotes.begin(), curQuotes.end());
        }
    }

    return totalProfit;
}

int main() {

    cout << most_profit({1, 2, 3, 4, 5, 6}) << endl;
    // Equals(15)); (buy at 1,2,3,4,5 and then sell all at 6)

    cout << most_profit({6, 5, 4, 3, 2, 1}) << endl;
    // Equals(0)); (nothing to buy for profit)

    cout << most_profit({1, 6, 5, 10, 8, 7}) << endl;
    // Equals(18)); (buy at 1,6,5 and sell all at 10)

    cout << most_profit({1, 2, 10, 3, 2, 7, 3, 2}) << endl;
    // Equals(26)); (buy at 1,2 and sell them at 10. Then buy at 3,2 and sell them at 7)
    

    return 0;
}
//
// #include <vector>

// int most_profit(const std::vector<int>& quotes)
// {
//     auto profit = 0;
//     for (auto it = quotes.begin(); it < quotes.end(); ++it)
//     {
//         profit += *std::max_element(it, quotes.end()) - *it;
//     }
//     return profit;
// }
