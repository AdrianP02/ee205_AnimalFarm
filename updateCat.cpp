///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCat.cpp
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   11_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "updateCat.h"
#include "catDatabase.h"

#include <stdio.h>
#include <string.h>

bool isCatNameTaken2( const char* name) {
    for (int i = 0; i < currentNumCats; i = i + 1) {
        if( strncmp( cats[i].name, name, MAX_CAT_NAME_CHARACTERS) == 0) {
            fprintf(stderr,"animalFarm1: %s's name is already in the database\n", name);
            return true;
        }
    }
    return false;
}

bool updateCatName( int index, const char* name) {
    isCatNameTaken2(name);
    if(strlen(name) > MAX_CAT_NAME_CHARACTERS) {
        return false;
    }

    if(strlen(name) == 0) {
        return false;
    }
    strncpy(cats[index].name, name, MAX_CAT_NAME_CHARACTERS);
    return true;
}

bool fixCat(int index) {
    cats[index].isFixed = true;
    return true;
}

bool updateCatWeight(int index, const Weight weight) {
    if(weight <= 0) {
        return false;
    }
    cats[index].weight = weight;
}

bool updateCatCollar1(int index, const enum Color color) {
    cats[index].collarColor1 = color;
    return true;
}

bool updateCatCollar2(int index, const enum Color color) {
    cats[index].collarColor2 = color;
    return true;
}

bool updateLicense(int index, const unsigned long long license) {
    cats[index].license = license;
    return true;
}