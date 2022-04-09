///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   03_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <iostream>
#include <cstring>
#include "config.h"


#define MAXIMUM_CHAR_CAT 50
enum Gender {UNKNOWN_GENDER, MALE, FEMALE};
enum Breed {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum Color {BLACK, WHITE, RED, BLUE, GREEN, PINK};

class Cat {
protected:
    //Protected
    char name[MAXIMUM_CHAR_CAT];
    enum Gender gender;
    enum Breed breed;
    bool isCatFixed;
    Weight weight;
public:
    //Getters
    const char *getName() const;
    Gender getGender() const;
    Breed getBreed() const;
    bool isFixed() const;
    Weight getWeight() const;

    //Setters
    void setName(const char* newName);
    void setGender(Gender newGender);
    void setBreed (Breed newBreed);
    void fixCat();
    void setWeight(Weight newWeight);

    //Static methods
    static bool validateName(const char* newName);
    static bool validateGender(const Gender newGender);
    static bool validateBreed(const Breed newBreed);
    static bool validateWeight(const Weight newWeight);

    //Public Member
    Cat* next;

    //Constructor
    Cat();
    Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight);

    virtual ~Cat();


    //Public Methods
    bool print() const noexcept;
    bool validate() const noexcept;

private:
    //Private Method Default
    void zeroOutMemberData();
};



