///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Cat.h"

#include <iostream>

using namespace std;

/// Public Member Functions
// Get Cat name
string Cat::getName() const noexcept {
    return name;
}

// Set Cat name
void Cat::setName(const string &newName) {
    if (validateName(newName) == false) {
        cout << "Invalid name" << endl;
        exit(EXIT_FAILURE);
    }
    name = newName;
}


// Report if cat is fixed
bool Cat::isFixed() const noexcept {
    return isCatFixed;
}

// FIx cat if it is unfixed
void Cat::fixCat() noexcept {
    isCatFixed = true;
}


// Say Meow
string Cat::speak() const noexcept {
    return string("Meow");
}

// Print contents
void Cat::dump() const noexcept {
    Mammal::dump();
    FORMAT_LINE_FOR_DUMP( "Cat", "name" ) << getName() << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Cat", "isFixed" ) << isFixed() << std::endl ;
}

// Validate
bool Cat::validate() const noexcept {
    validateName(getName());
    return Animal::validate();
}


/// Static Public Member Functions
// Check if newName is valid
bool Cat::validateName(const string &newName) {
    if (newName.empty() == true) {
        cout << "Cat must have a name" << endl;
        return false;
    }
    return true;
}

/// Static Public Attributes
// Scientific name for this species
const string Cat::SPECIES_NAME = "Felis Catus";


// Max weight for this species
const Weight::t_weight Cat::MAX_WEIGHT = 40;

