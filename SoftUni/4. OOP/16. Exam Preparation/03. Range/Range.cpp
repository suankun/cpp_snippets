#include "Range.h"
#include <algorithm>

Range::Range() : rangeFirst(0), rangeLength(0), valueCounts(nullptr) {}

bool Range::empty() const { 
    return valueCounts == nullptr; 
}

void Range::clear() {
    if (valueCounts) {
        delete[] valueCounts;
        valueCounts = nullptr;
        rangeFirst = 0;
        rangeLength = 0;
    }
}

Range::Range(const Range& other) 
    : rangeFirst(other.rangeFirst), rangeLength(other.rangeLength), valueCounts(nullptr) {
    if (other.valueCounts) {
        valueCounts = new size_t[rangeLength];
        std::copy(other.valueCounts, other.valueCounts + rangeLength, valueCounts);
    }
}

Range& Range::operator=(const Range& other) {
    if (this != &other) {
        clear();
        rangeFirst = other.rangeFirst;
        rangeLength = other.rangeLength;
        if (other.valueCounts) {
            valueCounts = new size_t[rangeLength];
            std::copy(other.valueCounts, other.valueCounts + rangeLength, valueCounts);
        }
    }
    return *this;
}

Range::~Range() {
    clear();
}

void Range::resize(T newFirst, T newLast) {
    size_t newLen = newLast - newFirst + 1;
    size_t* newCounts = new size_t[newLen]();
    
    if (valueCounts) {
        T oldLast = rangeFirst + rangeLength - 1;
        T copyStart = std::max(rangeFirst, newFirst);
        T copyEnd = std::min(oldLast, newLast);
        
        if (copyStart <= copyEnd) {
            size_t oldOffset = copyStart - rangeFirst;
            size_t newOffset = copyStart - newFirst;
            size_t count = copyEnd - copyStart + 1;
            std::copy(valueCounts + oldOffset, valueCounts + oldOffset + count, newCounts + newOffset);
        }
        delete[] valueCounts;
    }
    rangeFirst = newFirst;
    rangeLength = newLen;
    valueCounts = newCounts;
}

size_t Range::getIndex(T value) const {
    return static_cast<size_t>(value - rangeFirst);
}

size_t Range::getCount(T value) const {
    if (empty() || value < rangeFirst || value > rangeFirst + static_cast<T>(rangeLength) - 1)
        return 0;
    else
        return valueCounts[getIndex(value)];
}

void Range::add(T value) {
    if (empty()) {
        resize(value, value);
    } else if (value < rangeFirst) {
        resize(value, rangeFirst + static_cast<T>(rangeLength) - 1);
    } else if (value > rangeFirst + static_cast<T>(rangeLength) - 1) {
        resize(rangeFirst, value);
    }
    valueCounts[getIndex(value)]++;
}
