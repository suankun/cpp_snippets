#include <iostream>
#include <vector>
#include <string>

using namespace std;

pair< string, string > decks(int& deckNum, int& cardNum) {
    vector< vector< pair<string, string> > > decks = {{{"我", "wǒ; I, me"}, {"我们", "wǒmen; we, us (pl.)"}, {"你", "nǐ; you"}, {"他", "tā; he, him"}, {"她", "tā; she, her"}},
                                                     {{"上", "shàng, up"}, {"下", "xià, down"}, {"前面", "qiánmiàn, front"}}};

    pair< string, string > newCard = decks[deckNum][cardNum++];

    return newCard;
}

int main() {
    vector< pair<string, string> > curStudyDeck;
    int deckNum = 0;
    int cardNum = 0;
    while (true)
    {
        bool isNewCardAdded = false;
        int choice = 0, rotator = cardNum;
        curStudyDeck.push_back(decks(deckNum, cardNum));
        do {
            cout << "1. Show card" << endl;
            cout << "2. Add new card" << endl;
            cin >> choice;

            bool isOpen = false; int ch = -1;
            switch (choice)
            {
            case 1:
                cout << curStudyDeck[rotator].first << endl;
                do {
                    cout << "0. Open card." << endl;
                    cin >> ch;
                    if (ch == 0)
                        isOpen = true;
                    else
                        cout << "Please enter 0, to see back side." << endl;
                    cout << curStudyDeck[rotator].second << endl;
                } while (isOpen);
                break;
            case 2:
                isNewCardAdded = true;
                break;
            
            default:
                cout << "Please enter valid number from 1 to 3." << endl;
                break;
            }
            if (rotator == 0)
                rotator = cardNum;
            else
                rotator--;
            cout << "<---------------------------->" << endl;
        } while (isNewCardAdded);
        
    }
    

    return 0;
}