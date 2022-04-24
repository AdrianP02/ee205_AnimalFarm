///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   23_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <string>
#include <ostream>

class Weight {

/// Public types
public:         // The different units of measure for weight
    enum UnitOfWeight {
        POUND,  // The default value
        KILO,
        SLUG
    };

    // The native datatype of this Weight class
    typedef float t_weight; // Basically replaces 'float'

/// Public member functions
public:         // Constructors
    // Create a default weight
    Weight() noexcept;

    // Create a weight with a value. Unit should be set to the default unit.
    Weight(t_weight newWeight);

    // Create a weight with a unit of weight
    Weight(UnitOfWeight newUnitOfWeight) noexcept;

    // Create a weight with a value and a unit of weight
    Weight(t_weight newWeight, UnitOfWeight newUnitOfWeight);

    // Create a weight with a value and a maximum weight
    Weight(t_weight newWeight, t_weight newMaxWeight);

    // Create a weight with a unit of weight and a maximum weight value
    Weight(UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);

    // Create a weight with a value, unit, and maximum weight
    Weight(t_weight newWeight, UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);


public:         // Getters
    // Gets the weight in the Weight's units
    t_weight getWeight() const noexcept;

    // Get the weight in a specified unit
    t_weight getWeight(UnitOfWeight weightUnits) const noexcept;

    // Get the maximum weight
    t_weight getMaxWeight() const noexcept;

    // Get the UnitOfWeight for this Weight
    UnitOfWeight getWeightUnit() const noexcept;


public:         // Setters
    // Set the weight
    void setWeight(t_weight newWeight);

    // Set the weight as a specific unit
    void setWeight(t_weight newWeight, UnitOfWeight weightUnits);


public:         // Validation and other stuff
    // Checks if a weight is known. Return true if a weight is known
    bool isWeightKnown() const noexcept;

    // Checks if a maximum weight is set. Return true if it is set.
    bool hasMaxWeight() const noexcept;

    // Check if the weight is valid (Cannot be < 0). Return true if it is valid.
    bool isWeightValid(t_weight checkWeight) const noexcept;

    // Validation. Checks if the Weight is good and valid
    bool validate() const noexcept;

    // Print the weight class
    void dump();


public:         // Operators
    // Weights are equal when their weights are equal
    bool operator==(const Weight &rhs_Weight) const;

    // Compare two weights
    bool operator<(const Weight &rhs_Weight) const;

    // Add to an existing weight
    bool operator+=(t_weight rhs_addToWeight) const;


/// Static Public Member Functions
public:         // Static Methods
    // Convert from Kilograms to Pounds
    static float fromKilogramToPound(t_weight kilogram) noexcept;

    // Convert from Pounds to Kilograms
    static float fromPoundToKilogram(t_weight pound) noexcept;


    // Convert from Slugs to Pounds
    static float fromSlugToPound(t_weight slug) noexcept;

    // Convert from Pounds to Slugs
    static float fromPoundToSlug(t_weight pound) noexcept;


    // Convert a weight between two different units
    static float convertWeight(t_weight fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit) noexcept;


/// Static Public Attributes
public:         // Constants and other stuff
    // If weight is unknown, return this.
    static const t_weight UNKNOWN_WEIGHT;


    // How many Kilograms in a Pound
    static const t_weight KILOS_IN_A_POUND;

    // How many Slugs in a Pound
    static const t_weight SLUGS_IN_A_POUND;


    // The string label for Pounds
    static const std::string POUND_LABEL;

    // The string label for Kilograms
    static const std::string KILO_LABEL;

    // The string label for Slugs
    static const std::string SLUG_LABEL;


/// Private Member Functions
private:        // Private methods
    // Set the maximum weight
    void setMaxWeight(t_weight newMaxWeight);


/// Private Attributes
private:        // Private variables
    // Is weight known. Default is false.
    bool bIsKnown = false;

    // Is maximum weight defined. Default is false.
    bool bHasMax = false;

    // How the weight is held and displayed. Default is POUND. UnitOfWeight can only be set when Weight is being constructed
    enum UnitOfWeight unitOfWeight = POUND;

    // The Weight. Must be > 0. If maxWeight is set, then it must also be <= maxWeight
    t_weight weight{};

    // The maximum weight. Can only be set when Weight is being constructed
    t_weight maxWeight{};

};


