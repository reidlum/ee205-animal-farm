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
#include <iostream>


SinglyLinkedList::SinglyLinkedList() {
    head = nullptr;
}

void SinglyLinkedList::push_front(Node *newNode) {
    if (newNode == nullptr){
        throw std::invalid_argument("New node can't be nullptr");
    }

    //@todo add valid and check if the nodes in the list

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
    //@todo check if list is empty
    if (currentNode == nullptr){
        throw std::invalid_argument("Current node can't be nullptr");
    }
    //@todo check if current node is in list
    if (newNode == nullptr){
        throw std::invalid_argument("New node can't be nullptr");
    }
    //@todo check if new node is valid
    //@todo check if new node is in list
    newNode = new Node();
    newNode->next = currentNode->next;
    currentNode->next = newNode;
}



bool SinglyLinkedList::validate() const noexcept {
    return true;
}

void SinglyLinkedList::dump() const noexcept {
    for(Node* i = head; i != nullptr ; i = i->next){
        i->Node::dump();
    }
}

