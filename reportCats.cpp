///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
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
#include "reportCats.h"
#include "config.h"

void printCat(int index)
{
    if (index < MAX_CATS && index >= 0) //Checks if index is allowed
    {
        printf("cat index=[%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] collarColor1=[%s] collarColor2=[%s] license=[%llu]\n",index,database[index].name,genderName(database[index].gender),breedName(database[index].breed),database[index].isFixed,database[index].weight,colorName(database[index].collarColor1),colorName(database[index].collarColor2),database[index].license);

    }
    else{
        fprintf( stderr, "%s: Cat index [%d] is bad.\n", PROGRAM_NAME, index ) ;
    }
}

void printAllCats()
{
    for(int i = 0; i < MAX_CATS; i++){ //Just here so it doesn't print like 90 something blank cat structs
        if (database[i].weight != 0){
            printf("cat index=[%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] collarColor1=[%s] collarColor2=[%s] license=[%llu]\n",i,database[i].name,genderName(database[i].gender),breedName(database[i].breed),database[i].isFixed,database[i].weight,colorName(database[i].collarColor1),colorName(database[i].collarColor2),database[i].license);
        }

    }
}

int findCat(char* searchname)
{
    int indatabase; //varible that changes depending on if inputname is in the database
    for (int i = 0; i < MAX_CATS; i++){ //Checks if name is in database
        indatabase = strcmp(database[i].name, searchname);
        if (indatabase == 0){
            printf("cat index=%d\n",i);
            return i;
            break;

        }
        else if (i == MAX_CATS-1 && indatabase !=0){
            fprintf( stderr, "%s: Cat name [%s] is not in the database.\n", PROGRAM_NAME, searchname ) ;
            return 500;
        }
    }
    return 0;
}


