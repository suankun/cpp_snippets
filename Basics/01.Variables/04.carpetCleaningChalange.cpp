#include <iostream>

using namespace std;

int main() {
    int small_rooms {0};
    int large_rooms {0};
    const double price_for_small_rooms {25};
    const double price_for_large_rooms {35};
    const int estimate_valid_days {30};

    cout << "Hello, welcome to carpet cleaning service!\n" << endl;
    cout << "How many small rooms would you like to cleaned? ";
    cin >> small_rooms;
    cout << "How many large rooms would you like to cleaned? ";
    cin >> large_rooms;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small rooms: " << price_for_small_rooms << endl;
    cout << "Price per large rooms: " << price_for_large_rooms << endl;
    cout << "Cost: " << (price_for_small_rooms * small_rooms) + (price_for_large_rooms * large_rooms) << "lv" << endl;
    const double total_small_rooms {small_rooms * price_for_small_rooms};
    const double total_large_rooms {large_rooms * price_for_large_rooms};
    const double tax {(total_small_rooms + total_large_rooms) * 0.2};
    cout << "Tax: " << tax << "lv" << endl;
    cout << "=================================================" << endl;
    cout << "Total estimate: " << (price_for_small_rooms * small_rooms) + (price_for_large_rooms * large_rooms) + tax << endl;
    cout << "Estimate is valid: " << estimate_valid_days << endl;
}