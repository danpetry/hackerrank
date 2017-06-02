//
//  hackerrank.cpp
//  hackerrank
//
//  Created by Daniel Petry on 15/05/2017.
//  Copyright © 2017 Daniel. All rights reserved.
//

#include "hackerrank.hpp"
#include <unordered_map>
#include <map>
#include <iostream>


hackerrank::hackerrank() {}

int hackerrank::ransom_note(vector<string> magazine, vector<string> ransom) {

    map<string, int> wordCollection;
    for (auto& it : magazine) wordCollection[it]++;
    for (auto& it : ransom){
        if (wordCollection[it] > 0) wordCollection[it]--;
        else return false;
    }
    
    return true;
}

int hackerrank::factorial(int val){
    
    if(val > 1){
        return val * factorial(val - 1);
    }else{
        return 1;
    }

}

bool hackerrank::is_balanced(string expression){
    
    class stack{
        
        struct node{
            node* next;
            char character;
            node(char character){
                this->character = character;
                this->next = nullptr;
            }
        };
        node* head;
        
    public:
        int numberOfNodes;
        
        stack(){
            this->head = nullptr;
            this->numberOfNodes = 0;
        }
        
        void push(char character){
            node* newNode = new node(character);
            
            newNode->next = head;
            head = newNode;
            numberOfNodes++;
            return;
        }
        
        char pop(){
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
        
    };
    
    stack myStack;
    
    for (auto& character : expression){
        if (character == '{'){
            myStack.push('{');
        }
        if (character == '['){
            myStack.push('[');
        }
        if (character == '('){
            myStack.push('(');
        }
        if (character == '}'){
            if (myStack.pop() != '{') return false;
        }
        if (character == ']'){
            if (myStack.pop() != '[') return false;
        }
        if (character == ')'){
            if (myStack.pop() != '(') return false;
        }
        
    }
    
    if (myStack.numberOfNodes == 0){
        return true;
    }else{
        return false;
    }
    
    
}

