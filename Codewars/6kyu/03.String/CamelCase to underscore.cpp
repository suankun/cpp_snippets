// https://www.codewars.com/kata/5b1956a7803388baae00003a/train/cpp

// You wrote all your unit test names in camelCase. But some of your colleagues have troubles reading these long test names. So you make a compromise to switch to underscore separation.

// To make these changes fast you wrote a class to translate a camelCase name into an underscore separated name.

// Implement the ToUnderscore() method.

// Example:

// "ThisIsAUnitTest" => "This_Is_A_Unit_Test"

// But of course there are always special cases...

// You also have some calculation tests. Make sure the results don't get split by underscores. So only add an underscore in front of the first number.

// Also Some people already used underscore names in their tests. You don't want to change them. But if they are not split correct you should adjust them.

// Some of your colleagues mark their tests with a leading and trailing underscore. Don't remove this.

// And of course you should handle empty strings to avoid unnecessary errors. Just return an empty string then.

// Example:

// "Calculate15Plus5Equals20" => "Calculate_15_Plus_5_Equals_20"

// "This_Is_Already_Split_Correct" => "This_Is_Already_Split_Correct"

// "ThisIs_Not_SplitCorrect" => "This_Is_Not_Split_Correct"

// "_UnderscoreMarked_Test_Name_" => _Underscore_Marked_Test_Name_"

#include <string>
#include <cctype>

class CamelCaseTranslator
{
public:
    static std::string toUnderScore(std::string s)
    {
        if (s.empty()) return s;

        std::string leading, trailing;

        size_t start = 0;
        while (start < s.length() && s[start] == '_') {
            leading += "_";
            ++start;
        }

        size_t end = s.length();
        while (end > start && s[end - 1] == '_') {
            trailing = "_" + trailing;
            --end;
        }

        std::string core = s.substr(start, end - start);
        std::string result;

        for (size_t i = 0; i < core.length(); i++) {
            char c = core[i];

            if (std::isupper(c)) {
                if (i > 0 && core[i - 1] != '_') {
                    result += '_';
                }
                result += c;
            }
            else if (std::isdigit(c)) {
                if (i > 0 && !std::isdigit(core[i - 1]) && core[i - 1] != '_') {
                    result += '_';
                }
                result += c;
            }
            else {
                result += c;
            }
        }

        return leading + result + trailing;
    };
};
//
#include <regex>
#include <string>

using namespace std;
class CamelCaseTranslator
{
    public: static std::string toUnderScore(std::string s)
    {
        return regex_replace(regex_replace(s,regex("\\B(\\d+|[A-Z])"), "_$1"), regex("__"), "_");
    };
};
