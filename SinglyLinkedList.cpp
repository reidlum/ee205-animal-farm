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
#include <iostream>

void SinglyLinkedList::push_front(Node *newNode) {
    if (newNode == nullptr){
        throw std::invalid_argument("New node can't be nullptr");
    }

    //add valid and check if the nodes in the list

    newNode = new Node;
    newNode->next = head->next;
    head->next = newNode;
}

Node *SinglyLinkedList::pop_front() noexcept {
    if (head == nullptr)
        return nullptr;
    // Move the head pointer to the next node
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
