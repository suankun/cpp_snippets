#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

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

int main() {
    vector<string> text = {"Begin on Road A", "Right on Road B", "Right on Road C", "Left on Road D"};
    vector<string> res = solve(text);
    for (string& t : res) cout << t << ", ";

    return 0;
}
//
std::vector<std::string> solve(std::vector<std::string> v){
	int i;
    std::vector<std::string> res;
    std::string direction_old, direction_new;

    for(i=v.size()-1;i>=0; i--){
        std::string::size_type n = v[i].find(" ");
        direction_new = v[i].substr(0, n);
        std::cout << i << ". " << direction_new << std::endl;
        if (i==v.size()-1) res.push_back(v[i].replace(0, n, "Begin"));
        else {
        if (direction_old == "Left") res.push_back(v[i].replace(0, n, "Right"));
        if (direction_old == "Right") res.push_back(v[i].replace(0, n, "Left"));
        }
        direction_old=direction_new;
    }
    return res;

}
//
std::vector<std::string> solve(std::vector<std::string> v){
    std::vector<std::string> r;
    for (int i=v.size()-1; i>=0; i--)
    {
        std::string s = "";
        int k = (v[i][0] == 'L' ? 8 : 9), z = v[i].size();
        if (i==v.size()-1)
            s = "Begin on " + v[i].substr(k, z-k);
        else
            s = (v[i+1][0]=='R' ? "Left on " : "Right on ") + v[i].substr(k, z-k);
        r.push_back(s);
    }
    return r;
}
