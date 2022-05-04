///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "SinglyLinkedList.h"

#include <iostream>

using namespace std;

/// Public Member Functions
// Create a new SinglyLinkedList
SinglyLinkedList::SinglyLinkedList() {

}


// Insert newNode to the beginning of the List
// newNode must be valid, cannot be nullptr, and cannot already be in container
void SinglyLinkedList::push_front(Node *newNode) {
    if (newNode == nullptr) {
        cout << "invalid_argument: newNode is not valid" << endl;
        exit(EXIT_FAILURE);
    }

    if (newNode -> validate() == false) {
        cout << "domain_error: newNode is not valid" << endl;
        exit(EXIT_FAILURE);
    }

    if (isIn(newNode)) {
        cout << "logic_error: newNode is already in a container" << endl;
        exit(EXIT_FAILURE);
    }

    if (head != nullptr) {
        newNode -> next = head;
        head = newNode;
    }

    else {
        newNode -> next = nullptr;
        head = newNode;
    }
}

// Remove and return the first Node in the list
Node *SinglyLinkedList::pop_front() noexcept {
    if (head == nullptr) {
        return nullptr;
    }
    Node* poppedVal = head;
    if (head -> next != nullptr) {
        head = head -> next;
    }
    else {
        head = nullptr;
    }
    poppedVal -> next = nullptr;
    count--;
    return poppedVal;
}

// Insert newNode after currentNode
// Cannot be empty, currentNode != nullptr, currentNode must be in List, newNode != nullptr, newNode must be valid, newNode cannot already be in a list
void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    if (head == nullptr) {
        cout << "logic_error: List cannot be empty" << endl;
        exit(EXIT_FAILURE);
    }

    if (currentNode == nullptr) {
        cout << "invalid_argument: currentNode cannot be nullptr" << endl;
        exit(EXIT_FAILURE);
    }

    if (isIn(currentNode) == false) {
        cout << "logic_error: currentNode must be in a List" << endl;
        exit(EXIT_FAILURE);
    }

    if (newNode == nullptr) {
        cout << "invalid_argument: newNode cannot be nullptr" << endl;
        exit(EXIT_FAILURE);
    }

    if (newNode->validate() == false) {
        cout << "domain_error: newNode is invalid" << endl;
        exit(EXIT_FAILURE);
    }

    if (isIn(newNode) == true) {
        cout << "logic_error: newNode is already in a List" << endl;
        exit(EXIT_FAILURE);
    }
    newNode->next = currentNode->next;
    currentNode->next = newNode;
    count++;
}

// Output the contents of this container
void SinglyLinkedList::dump() const noexcept {
    cout << "SinglyLinkedList:  head=[" << head << "]" << endl;
    for( Node* currentNode = head ; currentNode != nullptr ; currentNode = currentNode->next ) {
        currentNode->dump();
    }
}

// Validate
// Validates container
bool SinglyLinkedList::validate() const noexcept {

}