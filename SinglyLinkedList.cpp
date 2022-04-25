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
#include "SinglyLinkedList.h"
#include "Node.h"
#include <iostream>


SinglyLinkedList::SinglyLinkedList() {
    head = nullptr;
}

void SinglyLinkedList::push_front(Node *newNode) {
    if (newNode == nullptr){
        throw std::invalid_argument("New node cannot be nullptr");
    }

    if(!newNode->Node::validate()){
        throw std::domain_error("New node is not valid");
    }

    if (head != nullptr){
        newNode->next = head;
        head = newNode;
    }
    else{
        newNode->next = nullptr;
        head = newNode;
    }
    count++;
}

Node *SinglyLinkedList::pop_front() noexcept {
    if (head == nullptr)
        return nullptr;

    Node* remove = head;
    head = head->next;
    delete remove;
    count--;
    return head;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    if (currentNode == nullptr || newNode == nullptr){
        throw std::invalid_argument("Node cannot be nullptr");
    }
    if(List::empty()){
        throw std::logic_error("The List is empty.");
    }
    if(!newNode->validate()){
        throw std::domain_error("newNode is not valid.");
    }
    newNode->next = currentNode->next;
    currentNode->next = newNode;
    count++;
}

void SinglyLinkedList::dump() const noexcept {
    std::cout << "SinglyLinkedList: head=[" << head << "]" << std::endl;
    Node* currNode = head;
    while (currNode != nullptr){
        currNode->dump();
        currNode = currNode -> next;
    }
}

bool SinglyLinkedList::validate() const noexcept {
    for(Node* i = head; i != nullptr ; i = i->next){
        i->Node::validate();
    }
    return true;
}
