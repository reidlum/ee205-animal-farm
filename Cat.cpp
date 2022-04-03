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
#include "Cat.h"

Cat::Cat() {}

Cat::Cat(char *newName, Gender newGender, Breed newBreed, Weight newWeight){

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
    memset(name, 0, MAX_CAT_NAME);
    strcpy(name, newName);
}

void Cat::setGender(Gender gender) {
    Cat::gender = gender;
}

void Cat::setBreed(Breed breed) {
    Cat::breed = breed;
}

void Cat::fixCat(bool isCatFixed) {
    Cat::isCatFixed = isCatFixed;
}

void Cat::setWeight(Weight weight) {
    Cat::weight = weight;
}



