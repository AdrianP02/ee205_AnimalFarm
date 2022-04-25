///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include "Node.h"
#include "Weight.h"
#include "Gender.h"

#include <string>

using namespace std;

class Animal : public Node {
///Public Member Functions
public:
    // Create an Animal with the minimum required fields
    Animal (const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies);

    // Create an Animal, populating all of the member variables
    Animal (const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies);

    // Get the kingdom, which is Animalia
    string getKingdom() const noexcept;

    // Get the classification
    string getClassification() const noexcept;

    // Get the species
    string getSpecies() const noexcept;

    // Get the gender
    Gender getGender() const noexcept;

    // Get the weight
    Weight::t_weight getWeight() const noexcept;

    // Set the weight
    void setWeight(const Weight::t_weight newWeight);

    // Ask animal to say something
    virtual string speak() const noexcept = 0;

    // Output contents
    void dump() const noexcept override;

    // Validate
    bool validate() const noexcept override;



/// Static Public Member Functions
public:
    // Verify the biological classification is valid
    static bool validateClassification(const string &checkClassification) noexcept;

    // Verify the biological species is valid
    static bool validateSpecies(const string &checkSpecies) noexcept;



/// Static Public Attributes
public:
    // Scientific name of the Animal kingdom
    static const string KINGDOM_NAME;



/// Protected Member Functions
protected:
    // Set the animal gender
    void setGender(const Gender newGender);



/// Private Attributes
private:
    // The Animal biologial species
    string species;

    // The Animal biological classification
    string classification;

    // The Animal Gender
    Gender gender = Gender::UNKNOWN_GENDER;

    // The Animal Weight
    Weight weight;

};


