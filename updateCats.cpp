///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "catDatabase.h"
#include "updateCats.h"
#include "config.h"

void updateCatName(int index, const char* newName)
{
    int indatabase;
    for (int i = 0; i < MAX_CATS; i++){ //Checks if name is in database
        indatabase = strcmp(database[i].name, newName);
        if (indatabase == 0){
            break;
        }
    }
    if (indatabase != 0) {
        for (int j = 0; j < MAX_CAT_NAME; j++){
            database[index].name[j] = newName[j];
        }
    }
    else{
        fprintf( stderr, "%s: Cat name [%s] is already in the database.\n", PROGRAM_NAME, newName ) ;
    }
}

void fixCat(int index)
{
    database[index].isFixed = true;
}

void updateCatWeight(int index, float newWeight)
{
    if (newWeight > 0){ //Checks if weight is > 0
        database[index].weight = newWeight;
    }
    else{
        fprintf( stderr, "%s: Cat weight [%f] isn't possible.\n", PROGRAM_NAME, newWeight ) ;
    }
}

void updateCatCollar1(int index, enum Color newColor)
{
    database[index].collarColor1 = newColor;
}

void updateCatCollar2(int index, enum Color newColor)
{
    database[index].collarColor2 = newColor;
}

void updateLicense(int index, unsigned long long newLicense)
{
    database[index].license = newLicense;
}

