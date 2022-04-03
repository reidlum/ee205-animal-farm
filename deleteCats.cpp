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
#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include <iostream>
#include <cassert>

bool deleteCat(Cat* inputName)
{

}


/*
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
        database[i].gender = UNKNOWN_GENDER;
        database[i].breed = UNKNOWN_BREED;
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
    database[index].gender = UNKNOWN_GENDER;
    database[index].breed = UNKNOWN_BREED;
    database[index].isFixed = 0;
    database[index].weight = 0;
    numcats -= 1;
}
*/
