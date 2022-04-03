///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   02_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <iostream>
#include <cstring>
#include "config.h"
#include "catDatabase.h"

class Cat {
protected:
    //protected members
    char name[MAX_CAT_NAME] ;
    enum Gender gender ;
    enum Breed breed ;
    bool isCatFixed ;
    Weight weight ;
public:
    //getters
    const char *getName() const;
    Gender getGender() const;
    Breed getBreed() const;
    bool isFixed() const;
    Weight getWeight() const;

    //setters
    void setName(const char* newName);
    void setGender(Gender gender);
    void setBreed(Breed breed);
    void fixCat(bool isCatFixed);
    void setWeight(Weight weight);

    //public member
    Cat* next ;

    //constructors
    Cat();
    Cat(char *newName, Gender newGender, Breed newBreed, Weight newWeight);


};

