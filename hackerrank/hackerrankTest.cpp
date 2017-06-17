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
#include "myBinarySearchTree.hpp"

using namespace std;

hackerrank hackerrank;

vector<string> magazine = {"give", "me", "one", "grand", "today", "night"};
vector<string> ransom = {"give", "one", "grand", "today"};

TEST(DISABLED_hackerrank, ransom_note) {

    EXPECT_EQ(true, hackerrank.ransom_note(magazine, ransom));
    
    
}

TEST(DISABLED_hackerrank, factorial){
    int input = 3;
    EXPECT_EQ(6, hackerrank.factorial(input));
    input = 9;
    EXPECT_EQ(362880, hackerrank.factorial(input));
}


TEST(DISABLED_hackerrank, balanced_brackets){
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

TEST(DISABLED_hackerrank, two_stack_queue){
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


//TODO: try it with a test for thisNode == nullptr, i.e., the leaf nodes call checkBST_2 as well. This would make the function neater
//TODO: see if it works on the website without making sure that every node has two or zero children...
//TODO: try and reduce the number of return statements
bool checkBST_2(node* thisNode, int max, int min){
    
    if((thisNode->left == nullptr) && (thisNode->right == nullptr)){
        
        if (thisNode->data < max && thisNode->data > min){
            return true;
        }else{
            return false;
        }
        
    }else if((thisNode->left != nullptr) && (thisNode->right != nullptr)){
        
        if(checkBST_2(thisNode->left, thisNode->data, min) && checkBST_2(thisNode->right, max, thisNode->data)){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}


bool checkBST(node* root) {
    
    return checkBST_2(root, INT_MAX, INT_MIN);
}

TEST(classTests, myBinarySearchTree){
    
    node myTree(4);
    myTree.insert(2);
    myTree.insert(6);
    myTree.insert(1);
    myTree.insert(3);
    myTree.insert(5);
    myTree.insert(7);
    
    EXPECT_EQ(true, myTree.contains(6));
    EXPECT_EQ(false, myTree.contains(8));

    myTree.printInOrder();
    
    EXPECT_EQ(true, checkBST(&myTree));
    
    
}

//BENCHMARK(hackerrank, balanced_brackets, 100, 100)
//{
//    hackerrank.is_balanced("{{[[(())]]}}");
//}
