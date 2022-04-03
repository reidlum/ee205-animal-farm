///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

//extern int addCat(const char* inputname, enum Gender inputgender, enum Breed inputbreed, bool isFixed, Weight inputweight, enum Color inputcollarColor1, enum Color inputcollarColor2, unsigned long long inputlicense);

#include "Cat.h"
extern bool addCat(Cat* newCat);