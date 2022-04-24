///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Node.h"
#include "config.h"

using namespace std;

/// Public Member Functions
// Output the contents of this object
void Node::dump() const {
    FORMAT_LINE_FOR_DUMP("Node", "this") << this << endl;
    FORMAT_LINE_FOR_DUMP("Node", "next") << next << endl;
}

// Check and validate the Node
bool Node::validate() const noexcept {

}

// Compare two nodes. Is left side > than right side
bool Node::operator>(const Node &rightSide) {
    return compareByAddress( this, &(Node&)rightSide );
}


/// Static Protected Member Functions
// Compare memory address of the object
bool Node::compareByAddress(const Node *node1, const Node *node2) {
    if (node1 > node2) {
        return true;
    }
    else {
        return false;
    }
}

