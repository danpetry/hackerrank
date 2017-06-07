//
//  myBinarySearchTree.cpp
//  hackerrank
//
//  Created by Daniel Petry on 07/06/2017.
//  Copyright © 2017 Daniel. All rights reserved.
//

#include "myBinarySearchTree.hpp"



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

bool node::amIABinarySearchTree(){
    std::cout << "amIABinarySearchTree: node value: " << data << endl;

    
    if ((left != nullptr) && (right != nullptr)){
        if ((left->findMaxInSubtree() < data) && (left->amIABinarySearchTree() == true)
            && (right->findMinInSubtree() > data) && (right->amIABinarySearchTree() == true)){
            return true;
        }else{
            return false;
        }
    }
    
    if ((left == nullptr) && (right == nullptr)) return true;
    
    return false;

}

int node::findMaxInSubtree(){
    std::cout << "findMaxInSubtree: node value: " << data << endl;

    
    if (left == nullptr && right == nullptr){
        return data;
    }else{
        int maxLeft = 0;
        int maxRight = 0;
        if (left != nullptr){
            maxLeft = left->findMaxInSubtree();
            
        }
        if (right != nullptr){
            maxRight = right->findMaxInSubtree();
        }
        
        if (maxLeft > maxRight){
            return maxLeft;
        }else{
            return maxRight;
        }

    }
    
}

int node::findMinInSubtree(){
    std::cout << "findMinInSubtree: node value: " << data << endl;
    
    if (left == nullptr && right == nullptr){
        return data;
    }else{
        int minLeft = 0;
        int minRight = 0;
        if (left != nullptr){
            minLeft = left->findMinInSubtree();
            
        }
        if (right != nullptr){
            minRight = right->findMinInSubtree();
        }
        
        if (minLeft < minRight){
            return minLeft;
        }else{
            return minRight;
        }
        
    }
    
}





