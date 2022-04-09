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

#include "catDatabase.h"

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
        const Gender newGender, // Note: This should first set the fields to default values before changing them to
        const Breed newBreed,   //       the parameters
        const Weight newWeight  //
        );

private: // Class Destructor
    void initializeMember();    // Zero out all member data

public: // Public Methods
    void print();               // Print a cat
    void validate();            // Check if all of Cat member variables are valid

public: // Validation functions
    static int validateName(const char* newName);           // Function for checking if newName is valid
    static int validateGender(const Gender newGender);      // Function for checking if newGender is valid
    static int validateBreed(const Breed newBreed);         // Function for checking if newBreed is valid
    static int validateWeight(const Weight newWeight);      // Function for checking if newWeight is valid

public: // Getters (reportCat)
    const char* getName();   // Get a Cat's name
    Gender getGender();      // Get a Cat's gender
    Breed getBreed();        // Get a Cat's breed
    bool getFixed();         // Get if a cat is fixed
    Weight getWeight();      // Get a Cat's weight

public: // Setters (addCat)
    void setName(const char* newName);  // Set a Cat's name
    void setGender(Gender newGender);   // Set a Cat's gender       // Change this to protected later
    void setBreed(Breed newBreed);      // Set a Cat's breed        // Change this to protected later
    void setFixed();                    // Set if a cat is fixed
    void setWeight(Weight newWeight);   // Set a Cat's weight

};



