///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file addCats.h
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
#include "catDatabase.h"
#include <stdbool.h>

extern int addCat(const char name[], const enum Gender gender, const enum Breed breed, const bool isFixed, const Weight weight, const enum Color collarColor1, const enum Color collarColor2, const unsigned long long license);
