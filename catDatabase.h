///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   11_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include "Cat.h"

#include <stdbool.h>
#include <stddef.h>


// Create head pointer
extern Cat* catDatabaseHeadPointer;

// A function that iterates through the database and checking each entry to see if it's valid.
extern bool validateDatabase();

// extern NumCats currentNumCats;
