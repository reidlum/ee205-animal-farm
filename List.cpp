///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "List.h"

bool List::empty() const noexcept {
    return head == nullptr;
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
    if (currentNode->next == nullptr){
        throw std::invalid_argument("Next Node is empty.");
    }
    return currentNode->next;
}
