//
//  myQueue.hpp
//  hackerrank
//
//  Created by Daniel Petry on 05/06/2017.
//  Copyright © 2017 Daniel. All rights reserved.
//

#ifndef myQueue_hpp
#define myQueue_hpp

#include <stdio.h>
#include <stack>
using namespace std;

class MyQueue {
    
public:
    stack<int> stack_newest_on_top, stack_oldest_on_top;
    
    void push(int x);
    
    void pop();
    int front();
};

#endif /* myQueue_hpp */
