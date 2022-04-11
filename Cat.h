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

#define MAX_CAT_NAME_CHARACTERS 50

// Create Cat class
class Cat {
protected: // Class member variables
    char name[MAX_CAT_NAME_CHARACTERS];
    enum Gender gender;
    enum Breed breed;
    bool isCatFixed;
    Weight weight;

public: // Public class member variable
    Cat* next;                  // Pointer to the Cat class

public: // Class Constructors
    Cat();                      // Construct a cat with default values

    Cat(const char* newName,    // Construct a cat with the following parameters
        Gender newGender,       // Note: We do not have 'Fixed' in here because we can only fix a cat if it's not. We cannot unfix a cat... yet...
        Breed newBreed,         //       We also don't have any info on if the Cats are fixed or not on the spec sheet
        Weight newWeight
    );

private: // Class Destructor
    void initializeMember();    // Zero out all member data

public: // Public Methods
    bool print();               // Print a cat
    bool validate();            // Check if all of Cat member variables are valid (Runs all validation functions)

public: // Validation functions (Port from AnimalFarm1 files)
    static bool validateName(const char* newName);          // Function for checking if newName is valid
    static bool validateGender(const Gender newGender);      // Function for checking if newGender is valid
    static bool validateBreed(const Breed newBreed);         // Function for checking if newBreed is valid
    static bool validateWeight(const Weight newWeight);      // Function for checking if newWeight is valid

public: // Getters
    const char* getName();   // Get a Cat's name
    Gender getGender();      // Get a Cat's gender
    Breed getBreed();        // Get a Cat's breed
    bool getFixed();         // See if a Cat is fixed
    Weight getWeight();      // Get a Cat's weight

public: // Setters
    void setName(const char* newName);  // Set a Cat's name
    void setGender(Gender newGender);   // Set a Cat's gender       // Change this to protected later
    void setBreed(Breed newBreed);      // Set a Cat's breed        // Change this to protected later
    void setFixed();                    // Fix a Cat
    void setWeight(Weight newWeight);   // Set a Cat's weight

};



