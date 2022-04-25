///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include "Mammal.h"

#include <string>
#include <cstdlib>

using namespace std;

class Cat : public Mammal{
/// Public Member Functions
public:
    //Create a Cat with the minimum fields necessary
    explicit Cat(const string &newName) : Mammal(MAX_WEIGHT, SPECIES_NAME) {
    if(validateName(newName) == false) {
        cout << "Cat must have a name" << endl;
        exit(EXIT_FAILURE);
    }
    name = newName;
    isCatFixed = false;
    }

    // Create a Cat with all member variables
    Cat (const string& newName, const Color newColor, const bool newIsFixed, const Gender newGender, const Weight::t_weight newWeight) : Mammal(newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME) {
    if(validateName(newName) == false) {
        cout << "Cat must have a name" << endl;
        exit(EXIT_FAILURE);
    }
    name = newName;
    isCatFixed = newIsFixed;
    }

    // Get Cat name
    string getName() const noexcept;

    // Set Cat name
    void setName(const string &newName);

    // Report if cat is fixed
    bool isFixed() const noexcept;

    // FIx cat if it is unfixed
    void fixCat() noexcept;

    // Say Meow
    string speak () const noexcept override;

    // Print contents
    void dump() const noexcept override;

    // Validate
    bool validate() const noexcept override;


/// Static Public Member Functions
public:
    // Check if newName is valid
    static bool validateName(const string &newName);


/// Static Public Attributes
public:
    // Scientific name for this species
    static const string SPECIES_NAME;

    // Max weight for this species
    static const Weight::t_weight MAX_WEIGHT;

/// Protected Attributes
protected:
    // Name of cat
    string name;

    // Is cat fixed or not
    bool isCatFixed;

};
