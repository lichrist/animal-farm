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

#include <string.h>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cassert>

#include "catDatabase.h"
#include "Cat.h"
#include "config.h"

#define MAXIMUM_CHAR_CAT 50

using namespace std;

void Cat::zeroOutMemberData(){
    memset(name, 0, MAXIMUM_CHAR_CAT);
    gender = UNKNOWN_GENDER;
    breed = UNKNOWN_BREED;
    isCatFixed = false;
    weight = UNKNOWN_WEIGHT;
    next = nullptr;
}

Cat::~Cat() {
    zeroOutMemberData();
}

Cat::Cat(){
    zeroOutMemberData();
}



Cat::Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight) : Cat(){
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
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
    if(validateName(newName)){
        memset(name, 0, MAXIMUM_CHAR_CAT);
        strcpy(name, newName);
    }
}

void Cat::setGender(Gender newGender) {
    if(gender == UNKNOWN_GENDER){
        validateGender(newGender);
        //Gender must be UNKNOWN_GENDER
        Cat::gender = newGender;
    }
    fprintf(stderr, "%s: The gender of the cat(s) has an error! \n", PROGRAM_NAME);
}

void Cat::setBreed(Breed newBreed) {
    if(breed == UNKNOWN_BREED){
        validateBreed(newBreed);
        //Breed must be UNKNOWN_BREED
        Cat::breed = newBreed;
    }
    fprintf(stderr, "%s: The Breed of the cat(s) has an error! \n", PROGRAM_NAME);
}

void Cat::fixCat() {
    Cat::isCatFixed = true;
}

void Cat::setWeight(Weight newWeight) {
    if(validateWeight(newWeight)){
        Cat::weight = newWeight;
    }
}

bool Cat::validateName(const char *newName) {
    //newName can't be null
    if(newName == nullptr){
        fprintf(stderr, "%s: [%s] cannot be NULL \n ", PROGRAM_NAME, newName);
        return false;
    }
    if(strlen(newName) <= 0){
        fprintf(stderr, "%s: [%s] cannot be <= 0 \n", PROGRAM_NAME, newName);
        return false;
    }
    if(strlen(newName) >= MAXIMUM_CHAR_CAT){
        fprintf(stderr, "%s: [%s] cannot be longer than MAXIMUM_CHAR_CAT! \n ", PROGRAM_NAME, newName);
        return false;
    }
    return true;
}

bool Cat::validateGender(const Gender newGender) {
    if(newGender == UNKNOWN_GENDER){
        fprintf(stderr, "%s: Gender needs to be known \n", PROGRAM_NAME, newGender);
        return false;
    }
    return true;
}

bool Cat::validateBreed(const Breed newBreed) {
    if(newBreed == UNKNOWN_BREED){
        fprintf(stderr, "%s: Breed needs to be known \n", PROGRAM_NAME, newBreed);
        return false;
    }
    return true;
}

bool Cat::validateWeight(const Weight newWeight) {
    if(newWeight <= 0){
        fprintf(stderr, "%s: Weight must be > 0", PROGRAM_NAME, newWeight);
        return false;
    }
    return true;
}

#define FORMAT_LINE(className, member) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

bool Cat::print() const noexcept {
    assert(validate());
    cout << setw(80) << setfill( '=' ) << "" << endl;
    cout << setfill( ' ' );
    cout << left;
    cout << boolalpha;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genderName( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedName( getBreed() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}

bool Cat::validate() const noexcept {
    if(validateName(name) == false){
        return false;
    }
    if(validateGender(gender) == false){
        return false;
    }
    if(validateBreed(breed) == false){
        return false;
    }
    if(validateWeight(weight) == false){
        return false;
    }
    return true;
}
