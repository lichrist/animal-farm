///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   03_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "catDatabase.h"
#include "addCats.h"
#include "config.h"
#include <cassert>

using namespace std;

bool addCat(Cat* newCat){
    assert(newCat != nullptr);
    if(newCat->validate() == false){
        fprintf(stderr, "Invalid arugment!\n", PROGRAM_NAME);
    }
    assert(validateDatabase());
    newCat->next = catDatabaseHeadPointer;
    catDatabaseHeadPointer = newCat;
    numberOfCats++;
    assert(validateDatabase());
    return true;
}
