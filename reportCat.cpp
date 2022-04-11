///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCat.cpp
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   11_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "reportCat.h"
#include "Cat.h"
#include "catDatabase.h"

#include <string.h>

// Convert Gender enum into strings using case statement
const char* genderString(const enum Gender gender) {
    switch(gender) {
        case UNKNOWN_GENDER:
            return "UNKNOWN";
        case MALE:
            return "MALE";
        case FEMALE:
            return "FEMALE";
    }
    return 0;
}

// Convert Breed enum into strings using case statement
const char* breedString(const enum Breed breed) {
    switch(breed) {
        case UNKNOWN_BREED:
            return "UNKNOWN";
        case MAINE_COON:
            return "MAINE COON";
        case MANX:
            return "MANX";
        case SHORTHAIR:
            return "SHORTHAIR";
        case PERSIAN:
            return "PERSIAN";
        case SPHYNX:
            return "SPHYNX";
    }
    return 0;
}

// Iterate through the linked list to find a cat name
// We can reuse the same iteration method as validateDatabase()
char str1[MAX_CAT_NAME_CHARACTERS];
char str2[MAX_CAT_NAME_CHARACTERS];
Cat* findCatByName(const char* findName) {
    for (Cat* catIndex = catDatabaseHeadPointer; catIndex != nullptr; catIndex = catIndex -> next) {
        strcpy(str1, findName);
        strcpy(str2, catIndex -> getName());
        if (strcmp(str1, str2) == 0) {
            return catIndex;
        }
    }
}


// Iterate through the linked list and print each cat until we reach nullptr
void printAllCats() {
    validateDatabase();
    for (Cat* catIndex = catDatabaseHeadPointer; catIndex != nullptr; catIndex = catIndex -> next) {
        catIndex -> print();
    }
    validateDatabase();
}
// Convert Color enum into strings using case statement
//const char* colorString(const enum Color color) {
//    switch(color) {
//        case BLACK:
//            return "BLACK";
//        case WHITE:
//            return "WHITE";
//        case RED:
//            return "RED";
//        case BLUE:
//            return "BLUE";
//        case GREEN:
//            return "GREEN";
//        case PINK:
//            return "PINK";
//    }
//    return 0;
//}
