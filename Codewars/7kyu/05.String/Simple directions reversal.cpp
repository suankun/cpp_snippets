#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

std::vector<std::string> solve(std::vector<std::string> v){
    std::vector<std::string> directions, places, output;
	  for (const auto& instruction : v) {
        std::istringstream iss(instruction);
        std::string direction, place;
        std::getline(iss, direction, ' ');
        std::getline(iss, place, ' ');
        std::getline(iss, place); // read the rest of the line as place
        directions.push_back(direction);
        places.push_back(place);
    }

    std::reverse(directions.begin() + 1, directions.end());
    std::reverse(places.begin(), places.end());

    for (size_t i = 0; i < directions.size(); ++i) {
        if (directions[i] == "Left") {
            directions[i] = "Right";
        } else if (directions[i] == "Right") {
            directions[i] = "Left";
        }
        output.push_back(directions[i] + " on " + places[i]);
    }

    return output;
}
