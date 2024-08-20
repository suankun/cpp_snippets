#include <iostream>

#include "OrganizerManager.h"
#include "OrganizerEmployee.h"
#include "AdultVisitor.h"
#include "MinorVisitor.h"
#include "SilverEmployee.h"
#include "GoldEmployee.h"

#include "Solution.h"

using namespace std;

// let's define all static vectors from the classes
Participant::Vector Participant::all;
Participant::Vector Organizer::all;
Participant::Vector Sponsor::all;
Participant::Vector Visitor::all;

Participant * readParticipant(const string & str) {

    istringstream istr(str);

    Participant::Type t = Participant::Type::fromStream(istr);

    switch(t.value) {
        case Participant::Type::OrganizerEmployee:
            return new OrganizerEmployee(istr);
        case Participant::Type::OrganizerManager:
            return new OrganizerManager(istr);
        case Participant::Type::AdultVisitor:
            return new AdultVisitor(istr);
        case Participant::Type::MinorVisitor:
            return new MinorVisitor(istr);
        case Participant::Type::SilverEmployee:
            return new SilverEmployee(istr);
        case Participant::Type::GoldEmployee:
            return new GoldEmployee(istr);     
        case Participant::Type::UNKNOWN:
            return nullptr;    
    }

}

int main(void) {

    vector<shared_ptr<Participant>> participants;

    // let's read all participants
    string str;
    getline(cin, str);
    while(str != "end") {
        participants.push_back(shared_ptr<Participant>(readParticipant(str)));
        getline(cin, str);
    }

    cout << "Participants: " << Participant::all.size() << 
            ", Organizers: " << Organizer::all.size() << 
            ", Sponsors: " << Sponsor::all.size() <<   
            ", Visitors: " << Visitor::all.size() << endl;


    // let's print out all participants by type
    cout << "Organizers:" << endl;
    cout << Organizer::all;

    cout << "Visitors:" << endl;
    cout << Visitor::all;

    cout << "Sponsors:" << endl;
    cout << Sponsor::all;

    return 0;
}