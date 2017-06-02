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


TEST(hackerrank, balanced_brackets){
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

//BENCHMARK(DISABLE_hackerrank, ransom_note, 1000, 100)
//{
//    hackerrank.ransom_note(magazine, ransom);
//}
