///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   11_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "catDatabase.h"

#include <stdbool.h>
#include <stddef.h>

#define MAX_CATS 1024
#define MAX_CAT_NAME_CHARACTERS 50

typedef float Weight;
typedef int NumCats;

enum Gender {
    UNKNOWN_GENDER,
    MALE,
    FEMALE
};

enum Breed {
    UNKNOWN_BREED,
    MAINE_COON,
    MANX,
    SHORTHAIR,
    PERSIAN,
    SPHYNX
};

enum Color {
    BLACK,
    WHITE,
    RED,
    BLUE,
    GREEN,
    PINK
};


struct Cat {
    char               name[MAX_CAT_NAME_CHARACTERS];
    enum Gender        gender;
    enum Breed         breed;
    bool               isFixed;
    float              weight;
    enum Color         collarColor1;
    enum Color         collarColor2;
    unsigned long long license;
};

extern struct Cat cats[MAX_CATS];

extern int currentNumCats;