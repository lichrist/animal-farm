///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   03_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "catDatabase.h"
#include "addCats.h"
#include "config.h"

int addCat(const char name[], const enum Gender gender, const enum Breed breed, const bool isFixed, const Weight weight, const enum Color collarColor1, const enum Color collarColor2, const unsigned long long license){

    if(numberOfCats > MAXIMUM_CAT){
        fprintf(stderr, "%s Error: Database is full!\n", PROGRAM_NAME);
        return 1;
    }
    if(strlen(name) <= 0){
        fprintf(stderr, "%s Error: The cat's name is empty!\n", PROGRAM_NAME);
        return 1;
    }
    if(strlen(name) > MAXIMUM_CHAR_CAT){
        fprintf(stderr, "%s Error: The cat's name is greater than 30 characters!\n", PROGRAM_NAME);
        return 1;
    }
    if(weight <= 0){
        fprintf(stderr, "%s Error: Weight must be greater than 0!\n", PROGRAM_NAME);
        return 1;
    }
    if(collarColor1 == collarColor2){
        fprintf(stderr, "%sError: Both collars cannot be the same color!\n", PROGRAM_NAME);
        return 1;
    }

    for(int i=0; i<numberOfCats; i++){
        if(strcmp(cats[i].name, name) == 0){
            fprintf(stderr, "%s Error: Name must be unique!\n", PROGRAM_NAME);
            return 1;
        }
        if(license == cats[i].license){
            fprintf(stderr, "%s Error: License must be unique!\n", PROGRAM_NAME);
            return 1;
        }
        if((collarColor1 == cats[i].collarColor1) && (collarColor1 == cats[i].collarColor2)){
            fprintf(stderr, "%s Error: collarColor must be unique!\n", PROGRAM_NAME);
            return 1;
        }
    }



    strcpy(cats[numberOfCats].name ,name);
    cats[numberOfCats].gender = gender;
    cats[numberOfCats].breed = breed;
    cats[numberOfCats].isFixed = isFixed;
    cats[numberOfCats].weight = weight;
    cats[numberOfCats].collarColor1 = collarColor1;
    cats[numberOfCats].collarColor2 = collarColor2;
    cats[numberOfCats].license = license;

    numberOfCats++;
    return numberOfCats;
}
