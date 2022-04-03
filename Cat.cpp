///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   02_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdexcept>
#include <iomanip>
#include <cassert>

#include "catDatabase.h"
#include "Cat.h"
#include "config.h"


using namespace std;

Cat::Cat() {
    zeroOutMemberData();
}

Cat::~Cat() {
    zeroOutMemberData();
}

Cat::Cat(const char *newName, Gender inputGender, Breed inputBreed, Weight inputWeight) : Cat() {
    setName(newName);
    setGender(inputGender);
    setBreed(inputBreed);
    setWeight(inputWeight);

}

const char *Cat::getName() const {
    return name;
}

Gender Cat::getGender() const {
    return gender;
}

Breed Cat::getBreed() const {
    return breed;
}

bool Cat::isFixed() const {
    return isCatFixed;
}

Weight Cat::getWeight() const {
    return weight;
}

void Cat::setName(const char *newName) {
    if (validateName(newName))
    {
        memset(name, 0, MAX_CAT_NAME);
        strcpy(name, newName);
    }
}

void Cat::setGender(Gender inputGender) {
    if (gender == UNKNOWN_GENDER)
    {
        validateGender(inputGender);
        Cat::gender = inputGender;
    }
    else{
        fprintf( stderr, "%s: No transgender cats.\n", PROGRAM_TITLE) ;
    }
}

void Cat::setBreed(Breed inputBreed) {
    if (breed == UNKNOWN_BREED)
    {
        validateBreed(inputBreed);
        Cat::breed = inputBreed;
    }
    else{
        fprintf( stderr, "%s: No transbreed cats.\n", PROGRAM_TITLE) ;
    }
}

void Cat::fixCat() {
    Cat::isCatFixed = true;
}

void Cat::setWeight(Weight inputWeight) {
    if (validateWeight(inputWeight))
    {
        Cat::weight = inputWeight;
    }
}

bool Cat::validateName(const char *newName) {
    if (newName == nullptr) //checks if newName is nullptr
    {
        fprintf( stderr, "%s: Cat name [%s] can't be NULL.\n", PROGRAM_TITLE, newName ) ;
        return false;
    }

    if (strlen(newName) <= 0)
    {
        fprintf( stderr, "%s: Cat name [%s] can't be <= 0.\n", PROGRAM_TITLE, newName ) ;
        return false;
    }

    if (strlen(newName) >= MAX_CAT_NAME) //Checks if cat name is < 30
    {
        fprintf(stderr, "%s: Cat name [%s] is too long.\n", PROGRAM_TITLE, newName);
        return false;
    }
    return true;
}

bool Cat::validateGender(const Gender inputGender) {
    if (inputGender == UNKNOWN_GENDER)
    {
        fprintf( stderr, "%s: Gender must be known.\n", PROGRAM_TITLE, inputGender ) ;
        return false;
    }
    return true;
}

bool Cat::validateBreed(const Breed inputBreed) {
    if (inputBreed == UNKNOWN_BREED)
    {
        fprintf( stderr, "%s: Breed must be known.\n", PROGRAM_TITLE, inputBreed ) ;
        return false;
    }
    return true;
}

bool Cat::validateWeight(const Weight inputWeight) {
    if (inputWeight <= 0) //Checks if weight is > 0
    {
        fprintf( stderr, "%s: Cat weight [%f] isn't possible.\n", PROGRAM_TITLE, inputWeight ) ;
        return  false;
    }
    return true;
}

void Cat::zeroOutMemberData() {
    memset(name, 0, MAX_CAT_NAME);
    gender = UNKNOWN_GENDER;
    breed = UNKNOWN_BREED;
    isCatFixed = false;
    weight = UNKNOWN_WEIGHT;
    next = nullptr;
}


/// Format a line for printing the members of a class
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
/// @returns true if everything worked correctly. false if something goes
/// wrong

bool Cat::print() const noexcept{
    assert( validate() ) ;
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genderName( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedName( getBreed() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}


bool Cat::validate() const noexcept{
    if(validateName( name ) && validateGender(gender) && validateBreed(breed) && validateWeight(weight))
    {
        return true;
    }
    else{
        return false;
    }
}







