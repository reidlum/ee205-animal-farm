///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "SinglyLinkedList.h"
#include "Node.h"
#include "Cat.h"
#include <iostream>


SinglyLinkedList::SinglyLinkedList() {
    head = nullptr;
}

void SinglyLinkedList::push_front(Node *newNode) {
    if (newNode == nullptr){
        throw std::invalid_argument("New node can't be nullptr");
    }

    if(!newNode->Node::validate()){
        throw std::domain_error("New node isn't valid");
    }

    for(Node* i = head; i != nullptr ; i = i->next){
        if (i == newNode){
            throw std::logic_error("New node is already in list");
        }
    }

    newNode = new Node();
    newNode->next = head;
    head = newNode;
}

Node *SinglyLinkedList::pop_front() noexcept {
    if (head == nullptr)
        return nullptr;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    //checks if list is empty
    if (List::empty()){
        throw std::logic_error("List is empty");
    }

    //checks if current node is mullptr
    if (currentNode == nullptr){
        throw std::invalid_argument("Current node can't be nullptr");
    }

    //checks if current node or new node is in list
    for(Node* i = head; i != nullptr ; i = i->next){
        if (i == currentNode){
            return;
        }
        else if (i->next == nullptr){
            throw std::logic_error("Current node is not in list");
        }
        else if (i == newNode){
            throw std::logic_error("New node is already in list");
        }
    }

    if (newNode == nullptr){
        throw std::invalid_argument("New node can't be nullptr");
    }

    if(!newNode->Node::validate()){
        throw std::domain_error("New node isn't valid");
    }

    newNode = new Node();
    newNode->next = currentNode->next;
    currentNode->next = newNode;
}



bool SinglyLinkedList::validate() const noexcept {
    for(Node* i = head; i != nullptr ; i = i->next){
        i->Node::validate();
    }
    return true;
}

void SinglyLinkedList::dump() const noexcept {
    for(Node* i = head; i != nullptr ; i = i->next){
        PRINT_HEADING_FOR_DUMP;
        i->dump();
    }
}

