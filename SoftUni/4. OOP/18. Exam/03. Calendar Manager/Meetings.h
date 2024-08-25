#ifndef __MEETINGS_H
#define __MEETINGS_H

#include <string>
#include <set>
#include <map>
#include <memory>

#include "DateTime.h"
#include "Participant.h"

class Meeting {

    std::string id;
    DateTimePeriod dtp;
    std::set<const Participant *> participants;
    size_t inputOrder;

    public:

        Meeting(size_t inputOrder, std::istream & is);
        Meeting(size_t inputOrder, const std::string & id, const DateTimePeriod & dtp);

        std::string getId() const { return id; }
        const DateTimePeriod& getDateTimePeriod() const { return dtp; }
        size_t getInputOrder() const { return inputOrder; }

        void registerParticipant(const Participant * part);

        size_t participantCount() const {
            return participants.size();
        }

        bool hasParticipant(const Participant * part) const {
            return participants.find(part) != participants.end();
        }

        bool doesOverlapWith(const Meeting * m) const;

        typedef std::set<const Participant *> Participants;
        Participants getParticipants() const {
            return participants;
        }

};

#endif
