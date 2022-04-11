///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCat.cpp
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   11_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "deleteCat.h"
#include "catDatabase.h"
#include "Cat.h"

#include <iostream>

using namespace std;

Cat* catIndex = catDatabaseHeadPointer;
// Search through our linked list for the cat we want to delete.

int deleteCat(Cat* delCat) {
    if (catDatabaseHeadPointer == delCat) {
        catDatabaseHeadPointer = catDatabaseHeadPointer -> next;
        delete delCat;
    }

    while (catIndex != nullptr) {
        if ((catIndex -> next) == delCat) {
            (catIndex -> next ) = (delCat -> next);
            delete delCat;
        }
    }
}


// Delete the first cat which causes the linked list to shift. Keep deleting the first cat until we hit NULL
bool deleteAllCats() {
    validateDatabase();
    while(catDatabaseHeadPointer != nullptr) {
        delete catDatabaseHeadPointer;
    }
    validateDatabase();
    return true;
}
