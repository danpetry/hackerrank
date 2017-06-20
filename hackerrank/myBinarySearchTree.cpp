//
//  myBinarySearchTree.cpp
//  hackerrank
//
//  Created by Daniel Petry on 07/06/2017.
//  Copyright © 2017 Daniel. All rights reserved.
//

#include "myBinarySearchTree.hpp"

//TODO: faster search of tree (try with a three tiered one)
//TODO: make functions nicer and clearer

node::node(int data){
    this->data = data;
    left = nullptr;
    right = nullptr;
}

void node::insert(int value){
    
    if (value < data){
        if (left == nullptr){
            left = new node(value);
        }else{
            left->insert(value);
        }
    }else if (value > data){
        if (right == nullptr){
            right = new node(value);
        }else{
            right->insert(value);
        }
    }
    
    
}

bool node::contains(int value){
    
    if (value == data){
        return true;
    }else if (value < data){
        if (left == nullptr){
            return false;
        }else{
            return left->contains(value);
        }
    }else if (value > data){
        if (right == nullptr){
            return false;
        }else{
            return right->contains(value);
        }
    }
    return false;
    
}


void node::printInOrder(){
    if (left != nullptr){
        left->printInOrder();
    }
    cout << data;
    if (right != nullptr){
        right->printInOrder();
    }
    
}


bool node::amIABinarySearchTree(int max, int min){
    
    if ((data <= min) || (data >= max)) return false;
    
    return ((left == nullptr) || left->amIABinarySearchTree(data, min)) && ((right == nullptr) || right->amIABinarySearchTree(max, data));
    
}



