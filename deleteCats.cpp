///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   03_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <string.h>
#include <stdio.h>
#include <cassert>
#include <iostream>

#include "catDatabase.h"
#include "Cat.h"
#include "config.h"

using namespace std;

bool deleteCat(Cat* deleteThisCat)
{
    if (validateDatabase()) {

        if (deleteThisCat == catDatabaseHeadPointer) {
            catDatabaseHeadPointer = catDatabaseHeadPointer -> next;
            delete deleteThisCat;
            numberOfCats--;
            assert(validateDatabase());
            return true;
        }

        Cat *i = catDatabaseHeadPointer;
        while (i != nullptr) {
            if (i->next == deleteThisCat) {
                i->next = deleteThisCat->next;
                delete deleteThisCat;
                numberOfCats--;
                assert(validateDatabase());
                return true;
            } else {
                i = i->next;
            }
        }
    }
    else{
        return false;
    }
    return false;
}

bool deleteAllCats() {
    while(catDatabaseHeadPointer != nullptr){
        deleteCat(catDatabaseHeadPointer);
    }
    numberOfCats;
    return true;
}



