//
//  myQueue.cpp
//  hackerrank
//
//  Created by Daniel Petry on 05/06/2017.
//  Copyright © 2017 Daniel. All rights reserved.
//
//  A queue created from two stacks.

#include "myQueue.hpp"
#include <stack>
#include <queue>

using namespace std;

    
void MyQueue::push(int x) {
    
    //    while (!stack_oldest_on_top.empty()){
    //        stack_newest_on_top.push(stack_oldest_on_top.top());
    //        stack_oldest_on_top.pop();
    //    }
    stack_newest_on_top.push(x);
    
    
}

void  MyQueue::pop() {
    if(stack_oldest_on_top.empty()){
        while (!stack_newest_on_top.empty()){
            stack_oldest_on_top.push(stack_newest_on_top.top());
            stack_newest_on_top.pop();
        }
        
    }
    stack_oldest_on_top.pop();
    
}

int  MyQueue::front() {
    
    if(stack_oldest_on_top.empty()){
        while (!stack_newest_on_top.empty()){
            stack_oldest_on_top.push(stack_newest_on_top.top());
            stack_newest_on_top.pop();
        }
    }
    return stack_oldest_on_top.top();
}
