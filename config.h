///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   03_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <iomanip>

#define PROGRAM_NAME "animalFarm1"


typedef int NumCats;

#define FORMAT_LINE_FOR_DUMP( className, member ) std::cout << std::setfill( ' ' ) << std::left << std::boolalpha << std::setw( 8) << (className) << std::setw(20) << (member) << std::setw(52)