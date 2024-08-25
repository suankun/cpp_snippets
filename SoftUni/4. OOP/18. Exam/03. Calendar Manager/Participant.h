#ifndef _PARTICIPANT_H_
#define _PARTICIPANT_H_

#include <string>
#include <iostream>

class Participant {

    public:
        virtual std::string getId() const = 0;
        virtual std::string toString() const = 0;
        virtual void readFrom(std::istream & is) = 0;
        
        virtual ~Participant() = default;

};

#endif  // _PARTICIPANT_H_

// #ifndef _CONTRIBUTOR_H_
// #define _CONTRIBUTOR_H_

// #include "Participant.h"

// class Contributor : public Participant {

//     std::string firstName, lastName;

//     public:

//         Contributor() = default;
//         Contributor(std::istream & is) { readFrom(is); }

//         std::string getId() const override {
//             return firstName + lastName;
//         }
        
//         std::string toString() const override {
//             return firstName + " " + lastName;
//         }

//         void readFrom(std::istream & is) override {
//             is >> firstName >> lastName;
//         }
// };

// #endif  // _CONTRIBUTOR_H_
