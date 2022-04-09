///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   03_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cassert>

#include "config.h"
#include "reportCats.h"
#include "catDatabase.h"
#include "Cat.h"

using namespace std;

bool printAllCats(){
    assert(validateDatabase());

    for(Cat* i = catDatabaseHeadPointer; i != nullptr; i = i->next) {
        i->print();
    }
    assert(validateDatabase());
    return true;
}

Cat* findCat(const char* name){
    for(Cat* i = catDatabaseHeadPointer; i != nullptr; i = i->next) {
        if(strcmp(name, i->getName()) == 0){
            return i;
        }
    }
    fprintf(stderr, "%s: Cat: [%s] is not in the Database!", PROGRAM_NAME, name);
    return 0;
}