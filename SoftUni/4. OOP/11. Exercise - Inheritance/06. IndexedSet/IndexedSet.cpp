#include "IndexedSet.h"

#include <algorithm>

using namespace std;

IndexedSet::IndexedSet() : valuesArray(nullptr) {}

IndexedSet::IndexedSet(const IndexedSet& other) : IndexedSet() {
    *this = other;
}

const Value& IndexedSet::operator[](size_t index) {
    if (valuesArray == nullptr)
        buildIndex();

    return valuesArray[index];
}

IndexedSet::~IndexedSet() {
    clearIndex();
}

void IndexedSet::add(const Value& v) {
    if (valuesSet.insert(v).second)
        clearIndex();
}

size_t IndexedSet::size() const {
    return valuesSet.size();
}

IndexedSet& IndexedSet::operator=(const IndexedSet& other) {
    if (this != &other) {
        clearIndex();
        this->valuesSet = other.valuesSet;
    }

    return *this;
}

void IndexedSet::clearIndex() {
    if (valuesArray) {
        delete [] valuesArray;
        valuesArray = nullptr;
    }
}

void IndexedSet::buildIndex() {
    clearIndex();

    valuesArray = new Value[valuesSet.size()];

    std::copy(valuesSet.begin(), valuesSet.end(), valuesArray);

    // size_t idx = 0;
    // for (const Value &  v : valuesSet)
    //     valuesArray[idx++] = v;
}