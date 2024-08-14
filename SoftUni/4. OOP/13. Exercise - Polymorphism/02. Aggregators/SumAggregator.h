#ifndef _SUM_AGGREGATOR_H_
#define _SUM_AGGREGATOR_H_



#include "Aggregator.h"

class SumAggregator : public StreamAggregator {

    public:

        SumAggregator(std::istream & istr) : StreamAggregator(istr) {
            aggregationResult = 0;
        }

        virtual void aggregate(int next) {
            // StreamAggregator::aggregate(next);
            aggregationResult += next;
        }

};


#endif  // _SUM_AGGREGATOR_H_