//
//  myStack.hpp
//  hackerrank
//
//  Created by Daniel Petry on 07/06/2017.
//  Copyright © 2017 Daniel. All rights reserved.
//

#ifndef myStack_hpp
#define myStack_hpp

#include <stdio.h>

struct node{
    node* next;
    char character;
    node(char character){
        this->character = character;
        this->next = nullptr;
    }
};

class myStack{
    
    
    node* head;
    
public:
    int numberOfNodes;
    
    myStack();
    void push(char character);
    char pop();
};

#endif /* myStack_hpp */
