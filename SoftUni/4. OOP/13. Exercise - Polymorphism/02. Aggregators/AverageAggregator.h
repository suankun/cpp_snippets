#ifndef _AVERAGE_AGGREGATOR_H_
#define _AVERAGE_AGGREGATOR_H_

#include "Aggregator.h"

#include <climits>

class AverageAggregator : public StreamAggregator {
    int sum;

    public:

        AverageAggregator(std::istream & istr) : StreamAggregator(istr) {
            aggregationResult = INT_MAX;
        }

        virtual void aggregate(int next) {
            StreamAggregator::aggregate(next);
            
            sum += next;
            aggregationResult = sum / getNumAggregated();
        }

};




#endif  // _AVERAGE_AGGREGATOR_H_