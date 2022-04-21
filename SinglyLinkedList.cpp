///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_010d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Christian Li <lichrist@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>

#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList() {
    head = nullptr;
}

void SinglyLinkedList::push_front(Node *newNode) {
    if (newNode == nullptr){
        throw std::invalid_argument("New node cannot be nullptr");
    }

    newNode = new Node;
    newNode->next = head->next;
    head->next = newNode;
}

Node *SinglyLinkedList::pop_front() noexcept {
    if (head == nullptr)
        return nullptr;

    Node* remove = head;
    head = head->next;
    delete remove;
    return head;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    if (currentNode == nullptr || newNode == nullptr){
        throw std::invalid_argument("Node annot be nullptr");
    }

    newNode = new Node();
    newNode->next = currentNode->next;
    currentNode->next = newNode;
}

void SinglyLinkedList::dump() const noexcept {

}

bool SinglyLinkedList::validate() const noexcept {
    return false;
}