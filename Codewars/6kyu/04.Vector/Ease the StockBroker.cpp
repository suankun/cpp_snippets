// https://www.codewars.com/kata/54de3257f565801d96001200/train/cpp

// Clients place orders to a stockbroker as strings. The order can be simple or multiple or empty.

// Type of a simple order: Quote/white-space/Quantity/white-space/Price/white-space/Status

// where Quote is formed of non-whitespace character, Quantity is an int, Price a double (with mandatory decimal point "." ), Status is represented by the letter B (buy) or the letter S (sell).

// Example:
// "GOOG 300 542.0 B"

// A multiple order is the concatenation of simple orders with a comma between each.

// Example:
// "ZNGA 1300 2.66 B, CLH15.NYM 50 56.32 B, OWW 1000 11.623 B, OGG 20 580.1 B"

// or

// "ZNGA 1300 2.66 B,CLH15.NYM 50 56.32 B,OWW 1000 11.623 B,OGG 20 580.1 B"

// To ease the stockbroker your task is to produce a string of type

// "Buy: b Sell: s" where b and s are 'double' formatted with no decimal, b representing the total price of bought stocks and s the total price of sold stocks.

// Example:
// "Buy: 294990 Sell: 0"

// Unfortunately sometimes clients make mistakes. When you find mistakes in orders, you must pinpoint these badly formed orders and produce a string of type:

// "Buy: b Sell: s; Badly formed nb: badly-formed 1st simple order ;badly-formed nth simple order ;"

// where nb is the number of badly formed simple orders, b representing the total price of bought stocks with correct simple order and s the total price of sold stocks with correct simple order.

// Examples:
// "Buy: 263 Sell: 11802; Badly formed 2: CLH16.NYM 50 56 S ;OWW 1000 11 S ;"

// "Buy: 100 Sell: 56041; Badly formed 1: ZNGA 1300 2.66 ;"

// Notes:
// If the order is empty, Buy is 0 and Sell is 0 hence the return is: "Buy: 0 Sell: 0".
// Due to Codewars whitespace differences will not always show up in test results.
// With Golang (and maybe others) you can use a format with "%.0f" for "Buy" and "Sell".

#include <string>
#include <vector>
#include <sstream>
#include <regex>
#include <iomanip>
#include <cmath>

class OrdersSummary
{
public:
    static std::string balanceStatements(const std::string &lst)
    {
        if (lst.empty()) return "Buy: 0 Sell: 0";

        std::regex validOrderRegex(R"(^\S+ \d+ \d*\.\d+ [BS])");
        std::stringstream ss(lst);
        std::string token;
        std::vector<std::string> typos;
        double bought = 0;
        double sold = 0;

        std::string input = lst;
        std::vector<std::string> orders;

        size_t start = 0;
        while (true)
        {
            size_t end = input.find(',', start);
            std::string order = input.substr(start, end - start);
            size_t firstNonSpace = order.find_first_not_of(' ');
            if (firstNonSpace != std::string::npos)
                order = order.substr(firstNonSpace);

            orders.push_back(order);
            if (end == std::string::npos)
                break;
            start = end + 1;
        }

        for (const auto &order : orders)
        {
            if (std::regex_match(order, validOrderRegex))
            {
                std::istringstream parts(order);
                std::string quote;
                int quantity;
                double price;
                char status;
                parts >> quote >> quantity >> price >> status;
                double total = quantity * price;
                if (status == 'B')
                    bought += total;
                else
                    sold += total;
            }
            else
            {
                typos.push_back(order + " ;");
            }
        }

        std::ostringstream result;
        result << "Buy: " << static_cast<long>(std::round(bought))
               << " Sell: " << static_cast<long>(std::round(sold));
        if (!typos.empty())
        {
            result << "; Badly formed " << typos.size() << ": ";
            for (const auto &t : typos)
                result << t;
        }

        return result.str();
    }
};
