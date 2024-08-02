// https://www.codewars.com/kata/581e476d5f59408553000a4b/train/cpp

template <class T>
class Node
{
public:
    T data;
    Node *next;
    Node(T x, Node *p = NULL) : data(x), next(p) {}
    Node() : next(NULL) {}
};

template <class T>
int length(const Node<T>* head) {
    int count = 0;
    const Node<T>* current = head;

    while (current != nullptr) {
        count++;
        current = current->next;
    }

    return count;
}
//
template <class T>
int length(const Node<T> *head)
{
    return !head ? 0 : 1 + length(head->next);
}
