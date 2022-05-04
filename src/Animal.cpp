///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"

#include <iostream>
#include <iomanip>


///Public Member Functions
// Create an Animal with the minimum required fields
Animal::Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification,
               const std::string &newSpecies) : Node(), weight(Weight::POUND, newMaxWeight){
    if( validateClassification(newClassification) == true) {
        classification = newClassification;
    }
    else {
        cout << "Invalid classification" << endl;
    }

    if( validateSpecies(newSpecies) == true) {
        species = newSpecies;
    }
    else {
        cout << "Invalid species" << endl;
    }
}

// Create an Animal, populating all of the member variables
Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const std::string &newClassification, const std::string &newSpecies) : Node(), weight(newWeight, newMaxWeight) {
    setGender(newGender);
    if( validateClassification(newClassification) == true) {
        classification = newClassification;
    }
    else {
        cout << "Invalid classification" << endl;
    }

    if( validateSpecies(newSpecies) == true) {
        species = newSpecies;
    }
    else {
        cout << "Invalid species" << endl;
    }
}

// Get the kingdom, which is Animalia
string Animal::getKingdom() const noexcept {
    return KINGDOM_NAME;
}

// Get the classification
string Animal::getClassification() const noexcept {
    return classification;
}

// Get the species
string Animal::getSpecies() const noexcept {
    return species;
}

// Get the gender
Gender Animal::getGender() const noexcept {
    return gender;
}

// Get the weight
Weight::t_weight Animal::getWeight() const noexcept {
    return weight.getWeight();
}

// Set the weight
void Animal::setWeight(const Weight::t_weight newWeight) {
    weight.setWeight(newWeight);
}



// Output contents
void Animal::dump() const noexcept {
    PRINT_HEADING_FOR_DUMP;
    Node::dump();
    FORMAT_LINE_FOR_DUMP("Animal", "this") << this << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "kingdom" ) << getKingdom() << endl ;
    FORMAT_LINE_FOR_DUMP("Animal", "classification" ) << getClassification() << endl ;
    FORMAT_LINE_FOR_DUMP("Animal", "species" ) << getSpecies() << endl ;
    FORMAT_LINE_FOR_DUMP("Animal", "gender" ) << getGender() << endl ;
    cout <<"Animal  weight              " << getWeight() << " out of " << weight.getMaxWeight() << " " << weight.getWeightUnit() << endl;
}

// Validate
bool Animal::validate() const noexcept {
    validateClassification(getClassification());
    validateSpecies(getSpecies());
    Node::validate();
    if (getKingdom().empty() == true) {
        cout << "Kingdom cannot be empty" << endl;
        return false;
    }
    if (weight.validate() == false) {
        cout << "Invalid weight" << endl;
        return false;
    }
    return true;
}



/// Static Public Member Functions
// Verify the biological classification is valid
bool Animal::validateClassification(const string &checkClassification) noexcept {
    if (checkClassification.empty() == true) {
        cout << "Classification cannot be blank" << endl;
        return false;
    }
    return true;
}

// Verify the biological species is valid
bool Animal::validateSpecies(const string &checkSpecies) noexcept {
    if (checkSpecies.empty() == true) {
        cout << "Species cannot be blank" << endl;
        return false;
    }
    return true;
}



/// Protected Member Functions
const string Animal::KINGDOM_NAME = "Animalia";


/// Protected Member Functions
// Set the animal gender
void Animal::setGender(const Gender newGender) {
    if (gender != Gender::UNKNOWN_GENDER) {
        cout << "Gender is already set" << endl;
        exit(EXIT_FAILURE);
    }
    gender = newGender;
}

