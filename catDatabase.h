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
enum genders {UNKNOWN_GENDER, MALE, FEMALE};
enum breeds {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum Color {BLACK, WHITE, RED, BLUE, GREEN, PINK};

struct Cat{
    char name[MAX_CAT_NAME];
    enum genders gender;
    enum breeds breed;
    bool isFixed;
    float weight;
    enum Color collarColor1;
    enum Color collarColor2;
    unsigned long long license;
};

extern struct Cat database[MAX_CATS];

extern int numcats;
extern const char* colorName(enum Color color);
extern const char* breedName(enum breeds breed);
extern const char* genderName(enum genders gender);

