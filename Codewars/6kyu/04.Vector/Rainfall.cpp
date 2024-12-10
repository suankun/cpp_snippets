// https://www.codewars.com/kata/56a32dd6e4f4748cc3000006/train/cpp

// dataand data1 are two strings with rainfall records of a few cities for months from January to December. The records of towns are separated by \n. The name of each town is followed by :.

// data and towns can be seen in "Your Test Cases:".

// Task:
// function: mean(town, strng) should return the average of rainfall for the city town and the strng data or data1 (In R and Julia this function is called avg).
// function: variance(town, strng) should return the variance of rainfall for the city town and the strng data or data1.
// Examples:
// mean("London", data), 51.19(9999999999996) 
// variance("London", data), 57.42(833333333374)
// Notes:
// if functions mean or variance have as parameter town a city which has no records return -1 or -1.0 (depending on the language)

// Don't truncate or round: the tests will pass if abs(your_result - test_result) <= 1e-2 or abs((your_result - test_result) / test_result) <= 1e-6 depending on the language.

// Shell

// Shell tests only variance.
// In "function "variance" $1 is "data", $2 is "town".
// A ref: http://www.mathsisfun.com/data/standard-deviation.html

// data and data1 (can be named d0 and d1 depending on the language; see "Sample Tests:") are adapted from: http://www.worldclimate.com

#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <cstdlib>

class Rainfall
{
public:
    static double mean(std::string town, const std::string &strng);
    static double variance(std::string town, const std::string &strng);
};

std::vector<std::string> split(const std::string &str, char delimiter)
{
    std::vector<std::string> result;
    std::stringstream ss(str);
    std::string item;
    while (std::getline(ss, item, delimiter))
    {
        result.push_back(item);
    }
    return result;
}

double Rainfall::mean(std::string town, const std::string &strng)
{
    std::vector<std::string> list = split(strng, '\n');
    std::string listTown;
    std::string rainfall;
    double sum = 0.0;

    for (const std::string &s : list)
    {
        std::vector<std::string> temp = split(s, ':');
        if (temp.size() > 1 && temp[0] == town)
        {
            listTown = town;
            rainfall = temp[1];
        }
    }

    if (listTown.empty())
        return -1;

    std::vector<std::string> values = split(rainfall, ',');
    for (const std::string &s : values)
    {
        std::vector<std::string> temp2 = split(s, ' ');
        if (temp2.size() > 1)
        {
            sum += std::stod(temp2[1]);
        }
    }

    return sum / 12;
}

double Rainfall::variance(std::string town, const std::string &strng)
{
    std::vector<std::string> list = split(strng, '\n');
    std::string listTown;
    std::string rainfall;
    double sum = 0.0;

    for (const std::string &s : list)
    {
        std::vector<std::string> temp = split(s, ':');
        if (temp.size() > 1 && temp[0] == town)
        {
            listTown = town;
            rainfall = temp[1];
        }
    }

    if (listTown.empty())
        return -1;

    double average = mean(town, strng);
    std::vector<std::string> values = split(rainfall, ',');
    for (const std::string &s : values)
    {
        std::vector<std::string> temp2 = split(s, ' ');
        if (temp2.size() > 1)
        {
            double value = std::stod(temp2[1]);
            sum += std::pow(value - average, 2);
        }
    }

    return sum / 12;
}
//
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>

class Rainfall
{
private:
    static std::vector<std::string> splitGen(const std::string &s, char delim);
public:
    static std::string findTown(const std::string &strng, std::string town);
    static std::vector<long double> meanVar(const std::string &strng, std::string town);
    static double mean(std::string town, const std::string &strng);
    static double variance(std::string town, const std::string &strng);
};

std::vector<std::string> Rainfall::splitGen(const std::string &s, char delim)
{
    std::vector<std::string> out;
    std::istringstream ss(s);
    std::string next;
    while (std::getline(ss, next, delim))
        out.push_back(next);
        
    return out;
}

std::string Rainfall::findTown(const std::string &strng, std::string town)
{
    std::vector<std::string> a1 = splitGen(strng, '\n');
    std::string res = "", t = "";
    for (auto s : a1)
    {
        std::vector<std::string> a2 = splitGen(s, ':');
        t = a2[0];
        if (town == t) return a2[1];
    }

    return res;
}

std::vector<long double> Rainfall::meanVar(const std::string &strng, std::string town)
{
    std::string d = findTown(strng, town);
    std::vector<long double> res = {};

    if (d == "")
        return {-1, -1};

    std::vector<std::string> r = splitGen(d, ',');
    int cnt = 0; long double sm1 = 0, sm2 = 0;
    for (auto rr : r)
    {
        std::vector<std::string> rrr = splitGen(rr, ' ');
        double v = std::stod(rrr[1]);
        sm1 += v; sm2 += v * v;
        cnt++;
    }

    long double mean = sm1 / cnt, var = sm2 / cnt - mean * mean;
    res.push_back(mean); res.push_back(var);

    return res;
}

double Rainfall::mean(std::string town, const std::string &strng)
{
    return meanVar(strng, town)[0];
}

double Rainfall::variance(std::string town, const std::string &strng)
{
    return meanVar(strng, town)[1];
}
