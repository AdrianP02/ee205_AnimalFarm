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
#include "reportCat.h"

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

// Create a cat with default values
Cat::Cat() {
    memset(name, 0, MAX_CAT_NAME_CHARACTERS);       // Set the name to be empty
    gender = UNKNOWN_GENDER;
    breed = UNKNOWN_BREED;
    isCatFixed = false;
    weight = UNKNOWN_WEIGHT;    // UNKNOWN_WEIGHT = -1
    next = nullptr;             // Since this is now a default slot, the pointer to this slot will be nullptr
}

// Create a cat with chosen parameters
Cat::Cat(const char* newName, const Gender newGender, const Breed newBreed, const Weight newWeight) : Cat() {
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
}
// Zero out/initialize cats
void Cat::initializeMember() {          // Same contents as Cat::Cat()
    memset(name, 0, MAX_CAT_NAME_CHARACTERS);
    gender = UNKNOWN_GENDER;
    breed = UNKNOWN_BREED;
    isCatFixed = false;
    weight = UNKNOWN_WEIGHT;
    next = nullptr;
}

// PrintCat Formatting setup
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
bool Cat::print() {
    validate();

    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" )         << getName()   << endl ;
    FORMAT_LINE( "Cat", "gender" )       << genderString( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" )        << breedString( getBreed() )   << endl ;
    FORMAT_LINE( "Cat", "isFixed" )      << getFixed()   << endl ;
    FORMAT_LINE( "Cat", "weight" )       << getWeight() << endl ;

    return true ;
}

// Calls all validation functions
void Cat::validate() {
    validateName(name);
    validateGender(gender);
    validateBreed(breed);
    validateWeight(weight);
}

// Validate Name
// Test newName to see if it is valid
// If it passes all tests, return true
// *Just transfer over the functions from addCat and edit params
bool Cat::validateName(const char *newName) {
    // Is newName == NULL
    if (newName == nullptr) {
        cout << "AnimalFarm2: Name cannot be NULL" << endl;
        return false;
    }
    // Is newName long (Longer than MAX_CAT_NAME_CHARACTERS)
    if (strlen(newName) > MAX_CAT_NAME_CHARACTERS) {
        cout << "AnimalFarm2: Name is too long. Maximum characters allowed is: " << MAX_CAT_NAME_CHARACTERS << endl;
        return false;
    }
    // Is newName too short or 0
    if (strlen(newName) <= 0) {
        cout << "AnimalFarm2: Name cannot be blank "<< endl;
        return false;
    }
    return true;
}

// Validate Gender
// Gender must be known
bool Cat::validateGender(const Gender newGender) {
    if (newGender == UNKNOWN_GENDER) {
        cout << "AnimalFarm2: Gender must be known" << endl;
        return false;
    }
    return true;
}

// Validate Breed
// Breed must be known
bool Cat::validateBreed(const Breed newBreed) {
    if (newBreed == UNKNOWN_BREED) {
        cout << "AnimalFarm2: Breed must be known" << endl;
        return false;
    }
    return true;
}

// Validate Weight
// Weight must be > 0
bool Cat::validateWeight(const Weight newWeight) {
    if (newWeight <= 0) {
        cout << "AnimalFarm2: Weight must be >= 0" << endl;
        return false;
    }
    return true;
}

// Getters
const char* Cat::getName() {
    return name;
}

Gender Cat::getGender() {
    return gender;
}

Breed Cat::getBreed() {
    return breed;
}

bool Cat::getFixed() {
    return isCatFixed;
}

Weight Cat::getWeight() {
    return weight;
}


// Setters
void Cat::setName(const char *newName) {
    // Validate newName first
    validateName(newName);
    strcpy(name, newName);
}

void Cat::setGender(Gender newGender) {
    if (gender == UNKNOWN_GENDER) {
        validateGender(newGender);
        Cat::gender = newGender;
    }
    else {
        cout << "AnimalFarm2: Gender is already known and cannot be changed" << endl;
    }
}

void Cat::setBreed(Breed newBreed) {
    if (breed == UNKNOWN_BREED) {
        validateBreed(newBreed);
        Cat::breed = newBreed;
    }
    else {
        cout << "AnimalFarm2: Breed is already known and cannot be changed" << endl;
    }
}

void Cat::setFixed() {
    Cat::isCatFixed == true;
}

void Cat::setWeight(Weight newWeight) {
    validateWeight(newWeight);
    Cat::weight = newWeight;
}