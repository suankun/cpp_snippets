#ifndef _MIN_AGGREGATOR_H_
#define _MIN_AGGREGATOR_H_

#include "Aggregator.h"

#include <climits>

class MinAggregator : public StreamAggregator {

    public:

        MinAggregator(std::istream & istr) : StreamAggregator(istr) {
            aggregationResult = INT_MAX;
        }

        virtual void aggregate(int next) {
            // StreamAggregator::aggregate(next);
            if (aggregationResult > next)
                aggregationResult = next;
        }

};

#endif  // _MIN_AGGREGATOR_H_