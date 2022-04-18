///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"

const std::string Animal::KINGDOM_NAME = "Animalia";

Animal::Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification,
               const std::string &newSpecies) {

}

Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const std::string &newClassification, const std::string &newSpecies) {

}

std::string Animal::getKingdom() const noexcept {
    return "Animalia";
}

std::string Animal::getClassification() const noexcept {
    return classification;
}

std::string Animal::getSpecies() const noexcept {
    return species;
}

Gender Animal::getGender() const noexcept {
    return gender;
}

Weight::t_weight Animal::getWeight() const noexcept {
    return weight.getWeight();
}

void Animal::setWeight(const Weight::t_weight newWeight) {
    weight.setWeight(newWeight);
}

bool Animal::validateClassification(const std::string &checkClassification) noexcept {
    if (checkClassification == "Mammilian"){
        return true;
    }
    return false;
}

bool Animal::validateSpecies(const std::string &checkSpecies) noexcept {
    if (checkSpecies == "Felis Catus"){
        return true;
    }
    return false;
}

void Animal::setGender(const Gender newGender) {
    if (gender == Gender::UNKNOWN_GENDER) {
        gender = newGender;
    } else {
        throw std::logic_error("No transgender cats");
    }
}