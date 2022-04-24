///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "List.h"

using namespace std;

/// Public member functions
// Checks if the list is empty
bool List::empty() const noexcept {
    if (head == nullptr) {
        return true;
    }
    else {
        return false;
    }
}


// Get the number of Node objects in the List
unsigned int List::size() const noexcept {
    return count;
}


// Checks if aNode is in the list
bool List::isIn(Node *aNode) const {
    Node* currentNode = head;
    while (currentNode != nullptr) {
        if (currentNode == aNode) {
            return true;
        }
        currentNode = currentNode -> next;
    }
    return false;
}


// Checks if the list is sorted
bool List::isSorted() const noexcept {
    if (count == 1) {
        return true;
    }
    for(Node* i = head; i -> next != nullptr; i = i -> next) {
        if(*i > *i -> next) {
            return false;
        }
    }
    return true;
}


// Get the first Node in the List
Node* List::get_first() const noexcept {
    return head;
}


// Delete all nodes in the List
void List::deleteAllNodes() noexcept {
    while(head != nullptr) {
        pop_front();
    }
}



/// Static Public Member Functions
// Get the next node in the list
Node* List::get_next(const Node *currentNode) {
    return currentNode -> next;
}

