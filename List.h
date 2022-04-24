///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file List.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include "Node.h" // The friend class

class List {
    /// Public Member Functions
public:
    // Checks if the list is empty
    bool empty() const noexcept;

    // Get the number of Node objects in the List
    unsigned int size() const noexcept;

    // Checks if a node is in the list
    bool isIn(Node *aNode) const;

    // Checks if the list is sorted
    bool isSorted() const noexcept;

    // Get the first Node in the List
    Node* get_first() const noexcept;

    // Delete all nodes in the List
    void deleteAllNodes() noexcept;

    // Remove and return the first Node in the List
    virtual Node* pop_front() noexcept = 0;

    // Output the contents of this container
    virtual void dump() const noexcept = 0;

    // Validation
    virtual bool validate() const noexcept = 0;



    /// Static Public Member Functions
public:
    // Get the next node in the list
    static Node* get_next(const Node *currentNode);



    /// Protected Attributes
protected:
    // The head pointer for the collection
    Node* head = nullptr;

    // Maintain a count of the number of Node objects in the collection
    unsigned int count = 0;
};

