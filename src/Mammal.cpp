///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Mammal.h"
#include "config.h"

#include <string>

using namespace std;

/// Public Member Functions
// Create a Mammal with the minimum required fields

// Create a Mammal, populating all of the member variables

// Get the color
Color Mammal::getColor() const noexcept {
    return color;
}

// Set the color
void Mammal::setColor(const Color newColor) noexcept {
    color = newColor;
}

// Print the contents of this object and parent
void Mammal::dump() const noexcept {
    Animal::dump();
    FORMAT_LINE_FOR_DUMP("Mammal", "color") << color << endl;
}


/// Static Public Attributes
// The scientific name for mammals
const string Mammal::MAMMAL_NAME = "Mammilian";


/// Protected Attributes
// The primary color of the mammal