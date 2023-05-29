#include <iostream>
#include <algorithm>
using namespace std;

// https://www.codewars.com/kata/5266876b8f4bf2da9b000362/train/cpp

#include <string>
#include <vector>

std::string likes(const std::vector<std::string> &names)
{
    std::string res;
    if (names.size() == 0) res = "no one likes this";
    if (names.size() == 1) res = names[0] + " likes this";
    if (names.size() == 2) res = names[0] + " and " + names[1] + " like this";
    if (names.size() == 3) res = names[0] + ", " + names[1] + " and " + names[2] + " like this";

    int counter {};
    for (size_t i {}; i < names.size(); i++) {
        counter++;
    }
    std::string num = std::to_string(counter-2);
    if (names.size() >= 4) res = names[0] + ", " + names[1] + " and " + num + " others like this";
    return res;
}

int main() {
    vector <string> names1 {}; // "no one likes this"
    vector <string> names2 {"Peter"}; // "Peter likes this"
    vector <string> names3 {"Jacob", "Alex"}; // "Jacob and Alex like this"
    vector <string> names4 {"Max", "John", "Mark"}; // "Max, John and Mark like this"
    vector <string> names5 {"Alex", "Jacob", "Mark", "Max"}; // "Alex, Jacob and 2 others like this"
    cout << likes(names1) << endl;
    cout << likes(names2) << endl;
    cout << likes(names3) << endl;
    cout << likes(names4) << endl;
    cout << likes(names5) << endl;

    return 0;
}

//////////////
std::string likes(const std::vector<std::string> &names){
  switch(names.size()){
    case 0: return "no one likes this";
    case 1: return names[0] + " likes this";
    case 2: return names[0] + " and " + names[1] + " like this";
    case 3: return names[0] + ", " + names[1] + " and " + names[2] + " like this";
    default: return names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
  }
}