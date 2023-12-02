#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Create a vector of strings
    std::vector<std::string> myVector = {"banana", "apple", "orange", "grape"};

    // Sort the vector of strings
    std::sort(myVector.begin(), myVector.end());

    // Display the sorted vector
    for (const auto& str : myVector) {
        std::cout << str << " ";
    }

    return 0;
}
