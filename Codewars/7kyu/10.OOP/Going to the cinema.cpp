// https://www.codewars.com/kata/562f91ff6a8b77dfe900006e/train/cpp
#include <iostream>
#include <cmath>
using namespace std;

class Movie
{
public:
    static int movie(int card, int ticket, double perc);
};

int Movie::movie(int card, int ticket, double perc) {
    int counter {};
    double totalPriceTickets {}, totalPriceCard {static_cast<double>(card)};
    while (ceil(totalPriceCard) >= totalPriceTickets) {
        totalPriceTickets += ticket;
        totalPriceCard += ((ticket * (pow(perc, counter)))*perc);
        counter++;
    }

    return counter;
}

int main() {
    Movie one;
    std::cout << one.movie(500, 15, 0.9) << std::endl;  // 43
    std::cout << one.movie(100, 10, 0.95) << std::endl;  // 24
    std::cout << one.movie(0, 10, 0.95) << std::endl;  // 2

    return 0;
}
