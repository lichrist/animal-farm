///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "List.h"
#include <cassert>

bool List::empty() const noexcept {
    if (head == nullptr){
        return true;
    }
    return false;
}

unsigned int List::size() const noexcept {
    return count;
}

bool List::isIn(Node *aNode) const {
    Node* current = head; // Initialize current
    while (current != nullptr)
    {
        if (current == aNode)
            return true;
        current = current->next;
    }
    return false;
}

bool List::isSorted() const noexcept {
    if (head == nullptr) {
        return true;
    }
    for (Node* i = head; i->next != nullptr; i = i->next) {
        if (i > i->next){
            return false;
        }
    }
    return true;
}

Node *List::get_first() const noexcept {
    return head;
}

Node *List::get_next(const Node *currentNode) {
    if (currentNode == nullptr){
        throw std::invalid_argument("The next Node is nullptr.");
    }
    return currentNode->next;
}

void List::deleteAllNodes() noexcept {
    assert( validate() );
    while( head != nullptr ) {
        pop_front();
    }
}