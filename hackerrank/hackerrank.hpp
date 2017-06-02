//
//  hackerrank.hpp
//  hackerrank
//
//  Created by Daniel Petry on 15/05/2017.
//  Copyright © 2017 Daniel. All rights reserved.
//

#ifndef hackerrank_hpp
#define hackerrank_hpp

#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class hackerrank {
public:
    hackerrank();
    
    int ransom_note(vector<string> magazine, vector<string> ransom);
    int factorial(int);
    bool is_balanced(string expression);
    
private:

};

#endif /* hackerrank_hpp */
