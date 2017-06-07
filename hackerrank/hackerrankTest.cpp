//
//  hackerrankTest.cpp
//  hackerrank
//
//  Created by Daniel Petry on 15/05/2017.
//  Copyright © 2017 Daniel. All rights reserved.
//

#include <stdio.h>
#include "hackerrank.hpp"
#include <hayai.hpp>
#include <gtest/gtest.h>
#include <vector>
#include <string>
#include "myQueue.hpp"

using namespace std;

hackerrank hackerrank;

vector<string> magazine = {"give", "me", "one", "grand", "today", "night"};
vector<string> ransom = {"give", "one", "grand", "today"};

TEST(DISABLE_hackerrank, ransom_note) {

    EXPECT_EQ(true, hackerrank.ransom_note(magazine, ransom));
    
    
}

TEST(DISABLE_hackerrank, factorial){
    int input = 3;
    EXPECT_EQ(6, hackerrank.factorial(input));
    input = 9;
    EXPECT_EQ(362880, hackerrank.factorial(input));
}


TEST(DISABLE_hackerrank, balanced_brackets){
    int t = 3;
    
    bool expectedAnswers[3] = {true, false, true};
    vector<string> expressions = {"{[()]}", "{[(])}", "{{[[(())]]}}"};
    for(int a0 = 0; a0 < t; a0++){
        string expression = expressions.at(a0);
        bool answer = hackerrank.is_balanced(expression);
        EXPECT_EQ(expectedAnswers[a0], answer);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    
}

TEST(DISABLE_hackerrank, two_stack_queue){
    MyQueue q1;
    int q, type, x;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */


}

//BENCHMARK(hackerrank, balanced_brackets, 100, 100)
//{
//    hackerrank.is_balanced("{{[[(())]]}}");
//}
