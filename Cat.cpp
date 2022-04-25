///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   03_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <iomanip>

#include "Cat.h"
#include "config.h"
#include "Animal.h"

#define MAXIMUM_CHAR_CAT 50

const std::string Cat::SPECIES_NAME = "Felis Catus";
const Weight::t_weight Cat::MAX_WEIGHT = 40;
/*
Cat::Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight) : Cat(){
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
}
*/
std::string Cat::getName() const noexcept {
    return Cat::name;
}

void Cat::setName(const std::string &newName) {
    if (validateName(newName)){
        Cat::name = newName;
    } else{
        throw std::invalid_argument("Cats should have a name");
    }
}

bool Cat::isFixed() const noexcept{
    return isCatFixed;
}

void Cat::fixCat() noexcept {
    Cat::isCatFixed = true;
}

/*
void Cat::setBreed(Breed newBreed) {
    if(breed == UNKNOWN_BREED){
        validateBreed(newBreed);
        //Breed must be UNKNOWN_BREED
        Cat::breed = newBreed;
    }
    else{
        fprintf(stderr, "%s: The Breed of the cat(s) has an error! \n", PROGRAM_NAME);
    }
}
*/

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

#define FORMAT_LINE(className, member) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

bool Cat::validate() const noexcept {
    return true;
}