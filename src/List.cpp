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
#include <cassert>
#define DEBUG
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
        throw std::invalid_argument("Next Node is empty.");
    }
    return currentNode->next;
}

void List::deleteAllNodes() noexcept {
    assert( validate() );
    while( head != nullptr ) {
        pop_front();
    }
#ifdef DEBUG
        std::cout << PROGRAM_NAME << ": All Nodes have been deleted" << std::endl ;
#endif
    assert( validate() );
}
