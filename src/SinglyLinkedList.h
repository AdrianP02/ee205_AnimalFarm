///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include "Node.h"   // Friend class
#include "List.h"   // Friend class

class SinglyLinkedList : public List {
public:
    /// Public Member Functions
    // Create a new SinglyLinkedList
    SinglyLinkedList();

    // Insert newNode to the beginning of the List
    void push_front(Node *newNode);

    // Remove and return the first Node in the list
    Node* pop_front() noexcept override;

    // Insert newNode after currentNode
    void insert_after (Node *currentNode, Node *newNode);

    // Output the contents of this container
    void dump() const noexcept override;

    // Validate
    bool validate() const noexcept override;

};


