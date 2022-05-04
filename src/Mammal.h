///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include "Color.h"
#include "Animal.h"

#include <string>

using namespace std;

class Mammal : public Animal {
/// Public Member Functions
public:
    // Create a Mammal with the minimum required fields
    Mammal(const Weight::t_weight newMaxWeight, const string& newSpecies) : Animal(newMaxWeight, MAMMAL_NAME, newSpecies) {};

    // Create a Mammal, populating all of the member variables
    Mammal (const Color newColor, const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight, const string& newSpecies) : Animal(newGender, newWeight, newMaxWeight, MAMMAL_NAME, newSpecies){
        setColor(newColor);
    };

    // Get the color
    Color getColor() const noexcept;

    // Set the color
    void setColor(const Color newColor) noexcept;

    // Print the contents of this object and parent
    void dump() const noexcept override;


/// Static Public Attributes
public:
    // The scientific name for mammals
    static const string MAMMAL_NAME;

/// Protected Attributes
protected:

    // The primary color of the mammal
    Color color = Color::UNKNOWN_COLOR;

};


