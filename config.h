///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Adrian Peng <apeng2@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#define PROGRAM_NAME "AnimalFarm3"

#define MAX_CATS 1024
#define MAX_CAT_NAME_CHARACTERS 50

typedef float Weight;
typedef int NumCats;

const Weight UNKNOWN_WEIGHT = -1; // When weight is unknown, set to -1

enum Breed {
    UNKNOWN_BREED,
    MAINE_COON,
    MANX,
    SHORTHAIR,
    PERSIAN,
    SPHYNX
};