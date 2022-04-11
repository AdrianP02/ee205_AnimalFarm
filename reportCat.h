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

#include "config.h"
#include "Cat.h"

extern const char* genderString(enum Gender gender);
extern const char* breedString(enum Breed breed);
//extern const char* colorString( enum Color color);


extern void printAllCats();

extern Cat* findCatByName(const char* findName);
