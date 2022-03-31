///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCat.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   11_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "catDatabase.h"

#include <stdbool.h>

extern bool updateCatName(int index, const char* name);
extern bool fixCat(int index);
extern bool updateCatWeight(int index, Weight weight);
extern bool updateCatCollar1(int index, const enum Color color);
extern bool updateCatCollar2(int index, const enum Color color);
extern bool updateLicense(int index, const unsigned long long license);
extern bool isCatNameTaken2(const char* name);
