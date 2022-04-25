///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Node.h"
#include "config.h"

void Node::dump() const {
    PRINT_HEADING_FOR_DUMP;
    FORMAT_LINE_FOR_DUMP( "Node", "this" ) << this << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Node", "next" ) << next << std::endl ;
}