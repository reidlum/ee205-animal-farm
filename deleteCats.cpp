///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
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
#include "deleteCats.h"
#include "config.h"

void deleteAllCats()
{
    for(int i = 0; i < MAX_CATS; i++){
        for (int j = 0; j < MAX_CAT_NAME; j++){
            database[i].name[j] = 0;
        }
        database[i].gender = 0;
        database[i].breed = 0;
        database[i].isFixed = 0;
        database[i].weight = 0;
    }
    numcats = 0;
}

void deleteCat(int index)
{
    for (int i = 0; i < MAX_CAT_NAME; i++){
        database[index].name[i] = 0;
    }
    database[index].gender = 0;
    database[index].breed = 0;
    database[index].isFixed = 0;
    database[index].weight = 0;
}

