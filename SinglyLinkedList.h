///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.h
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Node.h"
#include "List.h"

class SinglyLinkedList : public List {
public:  ///////////////////////// Public Constructors /////////////////////////
    SinglyLinkedList();        ///Make a new SinglyLinkedList

public:  /////////////////////////// Public Methods ////////////////////////////
    void  push_front( Node* newNode ) ;  ///Insert `newNode` to the beginning of the List
    Node* pop_front() noexcept override; ///Remove and return the first Node in the List

    void insert_after( Node* currentNode, Node* newNode ) ;  ///Insert `newNode` after `currentNode`

    void dump() const noexcept override ;     ///Output the contents of this container
    bool validate() const noexcept override ; ///Check to see if the container is valid
};