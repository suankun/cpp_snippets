#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double racquetPrice = 0.0;
    int racquetNum = 0, sneakersNum = 0;

    cin >> racquetPrice >> racquetNum >> sneakersNum;

    double sneakersPrice = racquetPrice/6;
    double totalPriceRacquet = racquetPrice*racquetNum;
    double totalPiceSneakers = sneakersPrice*sneakersNum;
    double additionalEquipment = (totalPriceRacquet+totalPiceSneakers)*0.2;

    double totalPrice = totalPriceRacquet+totalPiceSneakers+additionalEquipment;
    int paidByDjokovic = floor(totalPrice*0.125);
    int paidBySponsors = ceil(totalPrice*0.875);

    cout << "Price to be paid by Djokovic " << paidByDjokovic << endl;
    cout << "Price to be paid by sponsors " << paidBySponsors << endl;

    return 0;
}
