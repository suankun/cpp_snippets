// https://www.codewars.com/kata/590adadea658017d90000039/train/cpp
#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

unsigned checkFruit(const array<vector<string>, 3> &reels, unsigned fruit, unsigned spinNum) {
    unsigned points {};
    if (reels[spinNum][fruit] == "Wild") points = 10;
    else if (reels[spinNum][fruit] == "Star") points = 9;
    else if (reels[spinNum][fruit] == "Bell") points = 8;
    else if (reels[spinNum][fruit] == "Shell") points = 7;
    else if (reels[spinNum][fruit] == "Seven") points = 6;
    else if (reels[spinNum][fruit] == "Cherry") points = 5;
    else if (reels[spinNum][fruit] == "Bar") points = 4;
    else if (reels[spinNum][fruit] == "King") points = 3;
    else if (reels[spinNum][fruit] == "Queen") points = 2;
    else if (reels[spinNum][fruit] == "Jack") points = 1;

    return points;
}

unsigned fruit(const array<vector<string>, 3> &reels, const array<unsigned, 3> &spins)
{
    unsigned points {};
    unsigned spinNum {};
    if (reels[0][spins[0]] == reels[1][spins[1]] &&
        reels[0][spins[0]] == reels[2][spins[2]] &&
        reels[1][spins[1]] == reels[2][spins[2]]) {
        spinNum = 0;
        points = checkFruit(reels, spins[0], spinNum) * 10;
    } else if (reels[0][spins[0]] == reels[1][spins[1]]) {
        spinNum = 0;
        points = checkFruit(reels, spins[0], spinNum);
        if (reels[2][spins[2]] == "Wild") points *= 2;
    } else if (reels[0][spins[0]] == reels[2][spins[2]]) {
        spinNum = 0;
        points = checkFruit(reels, spins[0], spinNum);
        if (reels[1][spins[1]] == "Wild") points *= 2;
    } else if (reels[1][spins[1]] == reels[2][spins[2]]) {
        spinNum = 1;
        points = checkFruit(reels, spins[1], spinNum);
        if (reels[0][spins[0]] == "Wild") points *= 2;
    }
    return points;
}

int main(){
    array<vector<string>, 3> reels1;
    reels1[0] = {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"};
    reels1[1] = {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"};
    reels1[2] = {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"};
    array<unsigned, 3> spins1 = {0, 0, 0};

    array<vector<string>, 3> reels2;
    reels2[0] = {"Wild", "Star", "Bell", "Shell", "Seven", "Cherry", "Bar", "King", "Queen", "Jack"};
    reels2[1] = {"Bar", "Wild", "Queen", "Bell", "King", "Seven", "Cherry", "Jack", "Star", "Shell"};
    reels2[2] = {"Bell", "King", "Wild", "Bar", "Seven", "Jack", "Shell", "Cherry", "Queen", "Star"};
    array<unsigned, 3> spins2 = {5, 4, 3};

    array<vector<string>, 3> reels3;
    reels3[0] = {"King", "Cherry", "Bar", "Jack", "Seven", "Queen", "Star", "Shell", "Bell", "Wild"};
    reels3[1] = {"Bell", "Seven", "Jack", "Queen", "Bar", "Star", "Shell", "Wild", "Cherry", "King"};
    reels3[2] = {"Wild", "King", "Queen", "Seven", "Star", "Bar", "Shell", "Cherry", "Jack", "Bell"};
    array<unsigned, 3> spins3 = {0, 0, 1};

    array<vector<string>, 3> reels4;
    reels4[0] = {"King", "Jack", "Wild", "Bell", "Star", "Seven", "Queen", "Cherry", "Shell", "Bar"};
    reels4[1] = {"Star", "Bar", "Jack", "Seven", "Queen", "Wild", "King", "Bell", "Cherry", "Shell"};
    reels4[2] = {"King", "Bell", "Jack", "Shell", "Star", "Cherry", "Queen", "Bar", "Wild", "Seven"};
    array<unsigned, 3> spins4 = {0, 5, 0};

    cout << fruit(reels1, spins1) << endl;  // 100
    cout << fruit(reels2, spins2) << endl;  // 0
    cout << fruit(reels3, spins3) << endl;  // 3
    cout << fruit(reels4, spins4) << endl;  // 6
    
    return 0;
}
//
#include <array>
#include <algorithm>

using std::string;
using std::vector;
using std::array;
using std::swap;

static const string value[] = {"Jack", "Queen", "King", "Bar", "Cherry", "Seven", "Shell", "Bell", "Star", "Wild"};

int get_value_from_fruit(const string fruit)
{
    for (int i = 0; i < 10; ++i)
        if (fruit == value[i])
            return i+1;
            
    return 0;
}

unsigned fruit(const array<vector<string>, 3> &reels, const array<unsigned, 3> &spins)
{
    int fruit_1 = get_value_from_fruit(reels[0][spins[0]]);
    int fruit_2 = get_value_from_fruit(reels[1][spins[1]]);
    int fruit_3 = get_value_from_fruit(reels[2][spins[2]]);
    
    if ((fruit_1 == fruit_2) && (fruit_2 == fruit_3))
        return fruit_1 * 10;

    if (fruit_3 == fruit_1)
        swap(fruit_3, fruit_2);
    else if (fruit_3 == fruit_2)
        swap(fruit_3, fruit_1);
    
    if (fruit_1 != fruit_2)
        return 0;
    
    if (fruit_3 == 10)
        fruit_1 *= 2;
    
    return (unsigned)fruit_1;
}
