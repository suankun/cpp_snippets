// https://www.codewars.com/kata/5b097da6c3323ac067000036/train/cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solve_rock_off(const vector<int> &alice, const vector<int> &bob)
{
    int alicePoints = 0, bobPoints = 0;
    for (int i = 0; i < 3; i++) {
        if (alice[i] > bob[i]) alicePoints++;
        if (alice[i] < bob[i]) bobPoints++; 
    }

    string winner = "";
    if (alicePoints > bobPoints) winner = to_string(alicePoints) + ", " + to_string(bobPoints) + ": Alice made \"Kurt\" proud!";
    else if (alicePoints < bobPoints) winner = to_string(alicePoints) + ", " + to_string(bobPoints) + ": Bob made \"Jeff\" proud!";
    else winner = to_string(alicePoints) + ", " + to_string(bobPoints) + ": that looks like a \"draw\"! Rock on!";

    return winner;
}

int main() {
    cout << solve_rock_off({47, 7, 2}, {47, 7, 2}) << endl;  // "0, 0: that looks like a \"draw\"! Rock on!"
    cout << solve_rock_off({47, 67, 22}, {26, 47, 12}) << endl;  // "3, 0: Alice made \"Kurt\" proud!"
    cout << solve_rock_off({25, 50, 22}, {34, 49, 50}) << endl;  // "1, 2: Bob made \"Jeff\" proud!"

    return 0;
}
//
using namespace std;
string solve_rock_off(const vector<int>& alice, const vector<int>& bob) {
    const vector<string> q{"Alice made \"Kurt\" proud!", "Bob made \"Jeff\" proud!",
                                "that looks like a \"draw\"! Rock on!"};
    int a = 0, b = 0;
    for (size_t i = 0; i < bob.size(); i++)
        if (alice[i] > bob[i]) a++;
        else if (alice[i] < bob[i]) b++;
    return to_string(a) + ", " + to_string(b) + ": " + (a == b ? q.back() : q[a<b]);
}
