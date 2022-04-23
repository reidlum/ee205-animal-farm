///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   22_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Node.h"
#include "config.h"

void Node::dump() const {
    FORMAT_LINE_FOR_DUMP( "Node", "this" ) << this << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Node", "next" ) << next << std::endl ;
}