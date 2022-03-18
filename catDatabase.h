///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <stdio.h>
#include <stdbool.h>

#define MAXIMUM_CAT      1024
#define MAXIMUM_CHAR_CAT 50


enum Gender { UNKNOWN_GENDER, MALE, FEMALE };
enum Breed { UNKNOWN_BREED , MAINE_COON , MANX , SHORTHAIR, PERSIAN , SPHINX };
enum Color { BLACK, WHITE, RED, BLUE, GREEN, PINK};

extern int numberOfCats;

struct Cat{
    char name[50];
    enum Gender gender;
    enum Breed breed;
    bool isFixed;
    float weight;
    enum Color collarColor1;
    enum Color collarColor2;
    unsigned long long license;
};

extern struct Cat cats[MAXIMUM_CAT];

char* genderList ( const enum Gender gender);
char* breedList ( const enum Breed breed);
char* colorList ( const enum Color color);
