///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"

#include <iostream>

class Node {
/// Friends
friend class List;
friend class SinglyLinkedList;

/// Public Member Functions
public:
    // Output the contents of this object
    virtual void dump() const;

    // Check and validate the Node
    virtual bool validate() const noexcept;

    // Compare two nodes. Is left side > than right side
    virtual bool operator>(const Node &rightSide);


/// Static Protected Member Functions
protected:
    // Compare memory address of the object
    static bool compareByAddress(const Node *node1, const Node *node2);


/// Protected Attributes
protected:
    Node* next = nullptr;

};
