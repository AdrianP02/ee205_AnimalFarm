///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCat.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   11_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "catDatabase.h"

extern unsigned int addCat(
        const char*                name,
        const enum Gender          gender,
        const enum Breed           breed,
        const bool                 isFixed,
        const float                weight,
        const enum Color           collarColor1,
        const enum Color           collarColor2,
        const unsigned long long   license
);

// Validation Functions
extern bool isDatabaseFull();

extern bool validateName(const char* name);

extern bool validateWeight(const float weight);

extern bool isCatNameTaken(const char* name);