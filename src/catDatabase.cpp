///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   11_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "catDatabase.h"

#include <iostream>

using namespace std;

// Initialize the head pointer to NULL
Cat* catDatabaseHeadPointer = nullptr;

// Iterate through the database and run validate() for each entry inside
bool validateDatabase() {
    for (Cat* catIndex = catDatabaseHeadPointer; catIndex != nullptr; catIndex = catIndex -> next) {
        catIndex -> validate();
        }
    }
