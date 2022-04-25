///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"
#include <cassert>

const std::string Animal::KINGDOM_NAME = "Animalia";

Animal::Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies) : Node(), weight(Weight::POUND, newMaxWeight){

    if (validateClassification(newClassification)){
        classification = newClassification;
    }
    if (validateSpecies(newSpecies)){
        species = newSpecies;
    }
}

Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies) : Node(), weight(newWeight, newMaxWeight){
    setGender(newGender);

    if (validateClassification(newClassification)){
        classification = newClassification;
    }
    if (validateSpecies(newSpecies)){
        species = newSpecies;
    }

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
    if (gender != Gender::UNKNOWN_GENDER) {
        throw std::logic_error("No transgender cats");
    }
    gender = newGender;
}


void Animal::dump() const noexcept {
    Node::dump();
    FORMAT_LINE_FOR_DUMP( "Animal", "this" ) << this << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "kingdom" ) << getKingdom() << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "classification" ) << getClassification() << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "species" ) << getSpecies() << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "gender" ) << getGender() << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "weight" ) << getWeight() << "out of "<< weight.getMaxWeight() << " pounds" << std::endl ;
}

bool Animal::validate() const noexcept {
    assert( Node::validate() );

    assert( !getKingdom().empty() );
    assert( validateClassification(getClassification()) );
    assert( validateSpecies( getSpecies() ));
    assert( weight.validate() );
    return Node::validate();
}