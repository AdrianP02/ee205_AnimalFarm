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
#include "catDatabase.h"

#include <stdio.h>
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

// Convert Color enum into strings using case statement
const char* colorString(const enum Color color) {
    switch(color) {
        case BLACK:
            return "BLACK";
        case WHITE:
            return "WHITE";
        case RED:
            return "RED";
        case BLUE:
            return "BLUE";
        case GREEN:
            return "GREEN";
        case PINK:
            return "PINK";
    }
    return 0;
}


int printAllCats() {
    for (int index = 0; index < currentNumCats; index = index + 1) {
        printf("Cat index = [%d]   Name: [%s]   Gender: [%s]   Breed: [%s]   isFixed: [%d]   Weight: [%.1f]   Color 1: [%s]  Color 2: [%s]  License: [%llu]\n",
               index,
               cats[index].name,
               genderString(cats[index].gender),
               breedString(cats[index].breed),
               cats[index].isFixed,
               cats[index].weight,
               colorString(cats[index].collarColor1),
               colorString(cats[index].collarColor2),
               cats[index].license
        );
    }
    return 0;
}

int printCat( int index ) {
    if (index < 0 || index > currentNumCats) {
        printf("animalFarm0: Bad cat [%d]", index);
        return 0;
    }

    printf("Cat index = [%d]   Name: [%s]   Gender: [%s]   Breed: [%s]   isFixed: [%d]   Weight: [%.1f]   Color 1: [%s]  Color 2: [%s]  License: [%llu]\n",
           index,
           cats[index].name,
           genderString(cats[index].gender),
           breedString(cats[index].breed),
           cats[index].isFixed,
           cats[index].weight,
           colorString(cats[index].collarColor1),
           colorString(cats[index].collarColor2),
           cats[index].license
           );
}



int findCat( const char* name) {
    for (int i = 0; i < currentNumCats; i = i + 1) {
        if (strncmp(name, cats[i].name, MAX_CAT_NAME_CHARACTERS) == 0) {
            printf("%s's index is %d\n", name, i);
            return 0;
        }
    }
    fprintf(stderr,"animalFarm0: Name not in database");
    return 0;
}