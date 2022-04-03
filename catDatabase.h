///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "config.h"


#define MAX_CATS     (1024)
#define MAX_CAT_NAME (50)
enum Gender {UNKNOWN_GENDER, MALE, FEMALE};
enum Breed {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum Color {BLACK, WHITE, RED, BLUE, GREEN, PINK};
const Weight UNKNOWN_WEIGHT = -1;
/*
struct Cat{
    char name[MAX_CAT_NAME];
    enum Gender gender;
    enum Breed breed;
    bool isFixed;
    Weight weight;
    enum Color collarColor1;
    enum Color collarColor2;
    unsigned long long license;
};
*/
extern struct Cat database[MAX_CATS];

extern NumCats numcats;
extern const char* colorName(enum Color color);
extern const char* breedName(enum Breed breed);
extern const char* genderName(enum Gender gender);

