///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <iostream>
#include <iomanip>
#include "config.h"

class Node{
    friend class List;
    friend class SinglyLinkedList;

protected:
    ///Point to the next Node in the list or nullptr if it's the last Node in the list
    Node* next = nullptr;

    ///Allows us to separate the algorithm from the data.
    ///We can code an algorithm to operate on a virtual Node > operator and allow the descendants of Node to override > and implement their own ordering.
    static bool compareByAddress(const Node* node1, const Node* node2){ //
        if(node1 > node2)
            return true;
        else
            return false;
    }

public:
    ///Outputs contents of this object
    virtual void dump() const;

    ///Compare two nodes: Is the left greater than the right?
    virtual bool operator>(const Node& rightSide){
        return compareByAddress( this, &(Node&)rightSide );
    }

    virtual bool validate() const noexcept{
        if( next == nullptr ) {
            return true;  /// `nullptr` is a valid value for the next pointer.
        }

        /// @internal Perform a rudimentary recursive loop test and ensure
        ///           the next pointer does not refer back to itself.
        ///           This also has the benefit of dereferencing the
        ///           next pointer and ensuring it points to a valid address.
        if( next == next->next ) {
            std::cout << PROGRAM_NAME << ": Recursive loop detected:  next points to itself!";
            return false;
        }
        return true;
    }
};