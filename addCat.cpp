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

#include <stdio.h>
#include <string.h>

bool isDatabaseFull() {
    if (currentNumCats >= MAX_CATS) {
        fprintf(stderr, "animalFarm0: Cat database is already full\n");
        return true;
    }
    return false;
}

bool validateName(const char* name) {
    if(strlen(name) > MAX_CAT_NAME_CHARACTERS) {
        fprintf(stderr,"animalFarm0: Cat name is too long. Maximum characters is %d\n", MAX_CAT_NAME_CHARACTERS);
        return false;
    }

    if(strlen(name) <= 0) {
        fprintf(stderr,"animalFarm0: Cat must have a name\n");
        return false;
    }
    return true;
}

bool validateWeight(const float weight) {
    if (weight <= 0) {
        fprintf(stderr,"animalFarm0: Cat weight must be > 0\n");
        return false;
    }
    return true;
}

bool isCatNameTaken( const char* name) {
    for (int i = 0; i < currentNumCats; i = i + 1) {
        if( strncmp( cats[i].name, name, MAX_CAT_NAME_CHARACTERS) == 0) {
            fprintf(stderr,"animalFarm0: %s's name is already in the database\n", name);
            return true;
        }
    }
    return false;
}

unsigned int addCat(
        const char*                name,
        const enum Gender          gender,
        const enum Breed           breed,
        const bool                 isFixed,
        const float                weight,
        const enum Color           collarColor1,
        const enum Color           collarColor2,
        const unsigned long long   license
) {
    if(isDatabaseFull()){
        fprintf(stderr,"Bad cat\n");
        return 0;
    }
    if(!validateName(name)){
        fprintf(stderr,"Bad cat\n");
        return 0;
    }
    if(!validateWeight(weight)){
        fprintf(stderr,"Bad cat\n");
        return 0;
    }
    if(isCatNameTaken(name)){
        fprintf(stderr,"Bad cat\n");
        return 0;
    }

    int databaseIndex = currentNumCats;

    strncpy(cats[databaseIndex].name, name, MAX_CAT_NAME_CHARACTERS);
    cats[databaseIndex].gender = gender;
    cats[databaseIndex].breed = breed;
    cats[databaseIndex].isFixed = isFixed;
    cats[databaseIndex].weight = weight;
    cats[databaseIndex].collarColor1 = collarColor1;
    cats[databaseIndex].collarColor2 = collarColor2;
    cats[databaseIndex].license = license;

    currentNumCats = currentNumCats + 1;

    return databaseIndex;

}