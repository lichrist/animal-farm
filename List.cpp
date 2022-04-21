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

#include <cassert>
#include "config.h"
#include "List.h"

bool List::empty() const noexcept {
    if(head == nullptr){
        return true;
    }
    return false;
}

unsigned int List::size() const noexcept {
    return count;
}

bool List::isIn(Node *aNode) const {
    Node* currentList = head;

    while (currentList != nullptr)
    {
        if (currentList == aNode)
            return true;
        currentList = currentList->next;
    }
    return false;
}

bool List::isSorted() const noexcept {
    if (head == nullptr) {
        return true;
    }
    for (Node* head; head->next != nullptr; head = head->next) {
        if (head > head->next){
            return false;
        }
    }
    return true;
}

Node* List::get_first() const noexcept {
    if(!empty()){
        return head;
    }
    return nullptr;
}

Node *List::get_next(const Node *currentNode) {
    if (currentNode->next == nullptr){
        throw std::invalid_argument("currentNode is nullptr.");
    }
    return currentNode->next;
}

void List::deleteAllNodes() noexcept {
    while (head != nullptr) {
        pop_front();
    }

}