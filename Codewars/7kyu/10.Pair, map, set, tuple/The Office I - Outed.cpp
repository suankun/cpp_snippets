// https://www.codewars.com/kata/57ecf6efc7fe13eb070000e1/train/cpp
#include <string>
#include <map>
std::string outed(const std::map<std::string, int> &meet, const std::string &boss){
    double totalRating = 0;

    for (std::pair<std::string, int> p : meet) {
        if (p.first == boss)
            totalRating += 2 * p.second;
        else
            totalRating += p.second;
    }

    double avg = totalRating / meet.size();
    return avg <= 5 ? "Get Out Now!" : "Nice Work Champ!";
}
//
#include <numeric>
std::string outed( const std::map< std::string, int >& meet, const std::string& boss ) {
    return std::accumulate( meet.cbegin(), meet.cend(), double( meet.at( boss )),
        []( auto acc, const auto& p ) { return acc + p.second; }) / meet.size() <= 5
            ? "Get Out Now!" : "Nice Work Champ!";
}