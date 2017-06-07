//
//  myBinarySearchTree.hpp
//  hackerrank
//
//  Created by Daniel Petry on 07/06/2017.
//  Copyright © 2017 Daniel. All rights reserved.
//

#ifndef myBinarySearchTree_hpp
#define myBinarySearchTree_hpp

#include <iostream>

using namespace std;

class node{
    
public:
    
    node* left;
    node* right;
    
    int data;
    
    node(int data);
    void insert(int value);
    bool contains(int value);
    void printInOrder();
    bool amIABinarySearchTree();
    int findMaxInSubtree();
    int findMinInSubtree();

    
};


#endif /* myBinarySearchTree_hpp */
