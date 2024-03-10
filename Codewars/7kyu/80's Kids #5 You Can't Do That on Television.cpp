// https://www.codewars.com/kata/5667525f0f157f7a0a000004/train/cpp
#include <iostream>
using namespace std;

class EightiesKids5
{
public:
    static string bucketOf(const string &said);

};

string EightiesKids5::bucketOf(const string &said) {
    string res = "";
    string water = "water";
    string wet = "wet";
    string wash = "wash";
    string slime = "slime";
    string idk = "i don't know";

    string saidToLower = "";
    for (char ch: said) saidToLower += std::tolower(ch);

    bool isFoundWater = saidToLower.find(water) != string::npos;
    bool isFoundWet = saidToLower.find(wet) != string::npos;
    bool isFoundWash = saidToLower.find(wash) != string::npos;

    bool isFoundSlime = saidToLower.find(slime) != string::npos;
    bool isFoundIdk = saidToLower.find(idk) != string::npos;

    bool isWater = isFoundWater || isFoundWet || isFoundWash;
    bool isSlime = isFoundSlime || isFoundIdk;

    if (isWater && isSlime) res = "sludge";
    else if (isWater) res = "water";
    else if (isSlime) res = "slime";
    else res = "air";

    return res;
}

int main() {
    EightiesKids5 one;
    cout << one.bucketOf("water") << endl;  // water
    cout << one.bucketOf("slime") << endl;  // slime
    cout << one.bucketOf("I don't know if I'm doing this right.") << endl;  // slime
    cout << one.bucketOf("Will I get wet? I don't know.") << endl;  // sludge
    cout << one.bucketOf("This should be safe.") << endl;  // air

    return 0;
}

