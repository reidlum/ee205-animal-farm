///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "List.h"

bool List::empty() const noexcept {
    return head == nullptr;
}

unsigned int List::size() const noexcept {
    return count;
}

bool List::isIn(Node *aNode) const {

    return false;
}
