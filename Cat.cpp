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


#include "Cat.h"
#include "config.h"
#include "Animal.h"

const std::string Cat::SPECIES_NAME = "Felis Catus";
const Weight::t_weight Cat::MAX_WEIGHT = 40;

std::string Cat::getName() const noexcept {
    return Cat::name;
}

void Cat::setName(const std::string &newName) {
    if (validateName(newName)){
        Cat::name = newName;
    }
}

bool Cat::isFixed() const noexcept {
    if (Cat::isCatFixed){
        return true;
    }
    return false;
}

void Cat::fixCat() noexcept {
    Cat::isCatFixed = true;
}

std::string Cat::speak() const noexcept{
    return "Meow";
}

bool Cat::validateName(const std::string &newName) {
    if (newName.empty()){
        return false;
    }
    return true;
}

void Cat::dump() const noexcept {
    Mammal::dump();
    FORMAT_LINE_FOR_DUMP( "Cat", "name" ) << getName() << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Cat", "isFixed" ) << isFixed() << std::endl ;
}

bool Cat::validate() const noexcept {
    return Animal::validate();
}







