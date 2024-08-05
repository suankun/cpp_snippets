#include "List.h"

#include <sstream>
#include <climits>

List::Node::Node(int value, Node * prev, Node * next) : value(value), prev(prev), next(next) {}

int List::Node::getValue() const { return value; }
void List::Node::setValue(int value) { this->value = value; }

List::Node * List::Node::getNext() const { return next; }
void List::Node::setNext(Node * next) { this->next = next; }

List::Node * List::Node::getPrev() const { return prev; }
void List::Node::setPrev(Node * prev) { this->prev = prev; }

// List
List::List() : size(0), head(nullptr), tail(nullptr) {}

List::List(const List& other) : List() {
    addAll(other);
}

int List::first() const {
    return head != nullptr ? head->getValue() : INT_MIN; // Consider using a different value or throwing an exception
}

void List::add(int value) {
    Node * newNode = new Node(value, tail, nullptr);

    if (size == 0) {
        head = tail = newNode;
    } else {
        tail->setNext(newNode);
        newNode->setPrev(tail);
        tail = newNode;
    }
    size++;
}

void List::addAll(const List& other) {
    const Node * curr = other.head;

    while (curr) {
        add(curr->getValue());
        curr = curr->getNext();
    }
}

void List::removeFirst() {
    if (head == nullptr) {
        return;
    }

    Node * currHead = head;
    head = head->getNext();
    if (head != nullptr) {
        head->setPrev(nullptr);
    } else {
        tail = nullptr;
    }
    delete currHead;
    size--;
}

void List::removeAll() {
    Node * curr = head;

    while (curr) {
        Node * tmp = curr;
        curr = curr->getNext();
        delete tmp;
    }

    size = 0; head = nullptr; tail = nullptr;
}

size_t List::getSize() const { return size; }
bool List::isEmpty() const { return size == 0; }

std::string List::toString() const {
    std::ostringstream ostr;

    Node * curr = head;
    bool bFirst = true;
    while (curr) {
        if (!bFirst)
            ostr << ' ';
        ostr << curr->getValue();
        bFirst = false;
        curr = curr->getNext();
    }

    return ostr.str();
}

List& List::operator<<(const int& value) {
    add(value);
    return *this;
}

List& List::operator<<(const List& other) {
    addAll(other);
    return *this;
}

List& List::operator=(const List& other) {
    if (this != &other) {
        removeAll();
        addAll(other);
    }

    return *this;
}

List::~List() {
    removeAll();
}
