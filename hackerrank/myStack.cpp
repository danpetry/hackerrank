//
//  myStack.cpp
//  hackerrank
//
//  Created by Daniel Petry on 07/06/2017.
//  Copyright © 2017 Daniel. All rights reserved.
//

#include "myStack.hpp"





myStack::myStack(){
    this->head = nullptr;
    this->numberOfNodes = 0;
}

void myStack::push(char character){
    node* newNode = new node(character);
    
    newNode->next = head;
    head = newNode;
    numberOfNodes++;
    return;
}

char myStack::pop(){
    char returnedChar;
    if (head == nullptr){
        returnedChar = 'k';
    }else{
        node* oldHead = head;
        returnedChar = head->character;
        head = head->next;
        delete oldHead;
        numberOfNodes--;
    }
    
    return returnedChar;
}


