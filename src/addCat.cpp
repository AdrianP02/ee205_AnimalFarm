///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCat.cpp
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   11_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "addCat.h"
#include "catDatabase.h"
#include "config.h"


int addCat(Cat* newCat) {
    validateDatabase();
    newCat -> validate();
    newCat -> next = catDatabaseHeadPointer;
    catDatabaseHeadPointer = newCat;
    NumCats currentNumCats = currentNumCats + 1;
    validateDatabase();
    return 0;
}

