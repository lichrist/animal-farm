///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   03_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "config.h"
#include "Cat.h"

extern NumCats numberOfCats;
char* genderName(const enum Gender gender);
char* breedName(const enum Breed breed);
char* colorName(const enum Color color);
extern Cat* catDatabaseHeadPointer;
extern bool validateDatabase();
