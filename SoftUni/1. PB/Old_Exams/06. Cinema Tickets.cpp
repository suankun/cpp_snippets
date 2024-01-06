#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string movie;
    getline(cin, movie);

    int student=0, standard=0, kid=0;

    while (movie!="Finish")
    {
        int seats=0;
        cin >> seats;
        cin.ignore();
        int currStudent=0, currStandard=0, currKid=0;
        for (int i=0; i<seats; i++) {
            string ticketType;
            getline(cin, ticketType);

            if (ticketType=="End") break;
            else if (ticketType=="student") currStudent++;
            else if (ticketType=="standard") currStandard++;
            else if (ticketType=="kid") currKid++;
        }
        student+=currStudent, standard+=currStandard, kid+=currKid;
        double currTotalTickets=currStudent+currStandard+currKid;
        cout << fixed << setprecision(2) << movie << " - " << (currTotalTickets/seats)*100 << "%" << " full." << endl;

        getline(cin, movie);
    }
    
    double totalTickets=student+standard+kid;
    cout << "Total tickets: " << int(totalTickets) << endl;
    cout << fixed << setprecision(2) << (student/totalTickets)*100 << "%" << " student tickets." << endl;
    cout << fixed << setprecision(2) << (standard/totalTickets)*100 << "%" << " standard tickets." << endl;
    cout << fixed << setprecision(2) << (kid/totalTickets)*100 << "% kids tickets." << endl;

    return 0;
}
