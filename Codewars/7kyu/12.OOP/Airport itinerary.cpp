// https://www.codewars.com/kata/57a72cb872292dc43100000c/train/cpp
#include <vector>
#include <string>
#include <algorithm>

struct Route {
    std::string in;
    std::string out;
};

std::string itinerary(std::vector<Route> travel) {
    std::vector<std::string> itinerary;
    
    for (const auto& route : travel) {
        itinerary.push_back(route.in);
        itinerary.push_back(route.out);
    }
    
    itinerary.erase(std::unique(itinerary.begin(), itinerary.end()), itinerary.end());

    std::string result;
    for (size_t i = 0; i < itinerary.size(); ++i) {
        if (i > 0) {
            result += "-";
        }
        result += itinerary[i];
    }

    return result;
}
//
std::string itinerary(std::vector<Route> travel)
{
    std::string unique{};
    
    unique.append(travel[0].in + '-' + travel[0].out);
    
    for (int i = 1; i < travel.size(); ++i)
    {
        if (travel[i - 1].out != travel[i].in)
        unique.append( '-' + travel[i].in);
        unique.append('-' + travel[i].out);
    }

    return unique;
}
