// https://www.codewars.com/kata/582c297e56373f0426000098/train/cpp
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
#include <map>
using namespace std;

class Node
{
  public:
    int data;
    Node* next;
  
  Node(int data, Node* next = nullptr)
  {
    this->data = data;
    this->next = next;
  }
};

#include <string>

// Function to stringify the linked list
std::string stringify(Node* list)
{
    // Base case: if the list is null, return "null"
    if (list == nullptr) {
        return "nullptr";
    }

    // Recursive case: return the current node's data and the result of stringify on the next node
    return std::to_string(list->data) + " -> " + stringify(list->next);
}
//
#include <string>

std::string stringify(Node* list)
{
    std::string result{};
    while(list)
    {
        result += std::to_string(list->data) + " -> ";
        list = list->next;
    }
    result += "nullptr";
    
    return result;
}

