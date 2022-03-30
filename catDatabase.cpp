///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include "catDatabase.h"

#define MAXIMUM_CAT      1024
#define MAXIMUM_CHAR_CAT 50


NumCats numberOfCats = 0;
struct Cat cats[MAXIMUM_CAT];

char* genderList (const enum Gender gender){
    char* strGender;

    switch(gender){
        case 0: strGender = "Unknown Gender";
            break;
        case 1: strGender = "Male";
            break;
        case 2: strGender = "Female";
            break;

    }
    return strGender;
}

char* breedList (const enum Breed breed){
    char* strBreed;

    switch(breed){
        case 0: strBreed = "Unknown Breed";
            break;
        case 1: strBreed = "Main Coon";
            break;
        case 2: strBreed = "Manx";
            break;
        case 3: strBreed = "Short Hair";
            break;
        case 4: strBreed = "Persian";
            break;
        case 5: strBreed = "Sphynx";
            break;
    }
    return strBreed;
}

char* colorList (const enum Color color){
    char* strColor;

    switch(color){
        case 0: strColor = "Black";
            break;
        case 1: strColor = "White";
            break;
        case 2: strColor = "Red";
            break;
        case 3: strColor = "Blue";
            break;
        case 4: strColor = "Green";
            break;
        case 5: strColor = "Pink";
            break;
    }
    return strColor;
}
