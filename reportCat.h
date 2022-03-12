///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCat.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   11_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "catDatabase.h"

extern const char* genderString(const enum Gender gender);
extern const char* breedString(const enum Breed breed);
extern const char* colorString(const enum Color color);

extern int printCat(const int index);
extern int printAllCats();
extern int findCat(const char* name);
