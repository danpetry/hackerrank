//
//  main.cpp
//  hackerrank
//
//  Created by Daniel Petry on 15/05/2017.
//  Copyright © 2017 Daniel. All rights reserved.
//

#include <iostream>
#include "hayai.hpp"
#include "gtest/gtest.h"


int main(int argc, char * argv[]) {
    
    testing::InitGoogleTest(&argc, argv);
    int returnVal = RUN_ALL_TESTS();
    
    hayai::ConsoleOutputter consoleOutputter;
    hayai::Benchmarker::AddOutputter(consoleOutputter);
    hayai::Benchmarker::RunAllTests();
    
    
    return returnVal;

}
