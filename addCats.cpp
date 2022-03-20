///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
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
#include "addCats.h"
#include "config.h"


int addCat(char* inputname, enum genders inputgender, enum breeds inputbreed, bool isFixed, float inputweight, enum Color inputcollarColor1, enum Color inputcollarColor2, unsigned long long inputlicense)
{
    if (numcats > MAX_CATS) //Checks if database is full
    {
        fprintf( stderr, "%s: Cat name [%s] is already in the database.\n", PROGRAM_NAME, inputname ) ;
        return 500;
    }

    if (strlen(inputname) == 0) //Checks if cat name is empty
    {
        fprintf( stderr, "%s: Cat name [%s] is empty.\n", PROGRAM_NAME, inputname ) ;
        return  500;
    }
    if (strlen(inputname) >= MAX_CAT_NAME) //Checks if cat name is < 30
    {
        fprintf( stderr, "%s: Cat name [%s] is too long.\n", PROGRAM_NAME, inputname ) ;
        return  500;
    }

    if (inputweight <= 0) //Checks if weight is > 0
    {
        fprintf( stderr, "%s: Cat weight [%f] isn't possible.\n", PROGRAM_NAME, inputweight ) ;
        return  500;
    }

    int indatabase; //varible that changes depending on if inputname is in the database
    for (int i = 0; i < MAX_CATS; i++){  //Checks if name is in database
        indatabase = strcmp(database[i].name, inputname);
        if (indatabase == 0){
            break;
        }
    }

    if (indatabase == 0)
    {
        fprintf( stderr, "%s: Cat name [%s] is already in the database.\n", PROGRAM_NAME, inputname ) ;
        return 500;
    }

    else
    {
        for (int j = 0; j < MAX_CAT_NAME; j++){
            database[numcats].name[j] = inputname[j];
        }
        database[numcats].gender = inputgender;
        database[numcats].breed = inputbreed;
        database[numcats].isFixed = isFixed;
        database[numcats].weight = inputweight;
        database[numcats].collarColor1 = inputcollarColor1;
        database[numcats].collarColor2 = inputcollarColor2;
        database[numcats].license = inputlicense;
        numcats = numcats + 1;
        return numcats - 1;
    }
}
