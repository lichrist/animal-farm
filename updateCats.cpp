///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   03_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "reportCats.h"
#include "catDatabase.h"
#include "addCats.h"
#include "updateCats.h"
#include "config.h"
/*
int updateCatName(const int index, const char newName[]){
    if(index < 0){
        fprintf(stderr, "%s Error: No index!\n", PROGRAM_NAME);
        return 1;
    }
    if(index >= numberOfCats){
        fprintf(stderr, "%s Error: No cats on the index of %d\n", PROGRAM_NAME, index);
        return 1;
    }
    if(strlen(newName) <= 0 || strlen(newName) > MAXIMUM_CHAR_CAT){
        fprintf(stderr, "%s Error: Cat's name cannot be empty or greater than 50 charactes!\n", PROGRAM_NAME);
        return 1;
    }
    for(int i=0; i<numberOfCats; i++){
        if(strcmp(newName, cats[i].name) == 0){
            fprintf(stderr, "%s Error: Cat must be unique!\n", PROGRAM_NAME);
            return 1;
        }
    }
    strcpy(cats[index].name , newName);
    printf("The cat at index %d has the name changed to [%s]\n", index, newName);
    return 0;
}

int fixCat(const int index){
    if(isIndexValid(index) == 1)
        return 0;
    cats[index].isFixed = true;

    printf("[%d] is fixed\n", index);
    return 0;
}

int updateCatWeight(const int index, const Weight newWeight){
    if(index < 0){
        fprintf(stderr, "%s Error: No index!\n", PROGRAM_NAME);
        return 1;
    }
    if(index >= numberOfCats){
        fprintf(stderr, "%s Error: No cats on the index!\n", PROGRAM_NAME);
        return 1;
    }
    if(newWeight <= 0){
        fprintf(stderr, "%s Error: Weight must be greater than 0!\n", PROGRAM_NAME);
        return 1;
    }
    cats[index].weight = newWeight;
    printf("[%s] at index [%d] has been changed to weight: [%f]\n", cats[index].name, index, cats[index].weight);
    return 0;
}

//Added isIndexValid to check to see if the index is valid
int isIndexValid(const int index){
    if( index < 0){
        fprintf(stderr, "%s Error: the Index [%d] you have entered is not valid!", PROGRAM_NAME, index);
        return 1;
    }
    if(index > numberOfCats -1){
        fprintf(stderr, "%s Error: the Index [%d] you have entered is not valid!", PROGRAM_NAME, index);
        return 1;
    }
    else return 0;
}

int updateCatCollar1(const int index, const enum Color newColor1){
    if( isIndexValid(index) == 1){
        return 1;
    }

    cats[index].collarColor1 = newColor1;
    return 0;
}

int updateCatCollar2(const int index, const enum Color newColor2){
    if( isIndexValid(index) == 1){
        return 1;
    }
    cats[index].collarColor2 = newColor2;
    return 0;
}

int updateCatLicense(const int index, const unsigned long long license){
    if( isIndexValid(index) == 1){
        return 1;
    }
    cats[index].license = license;
    return 0;
}
*/