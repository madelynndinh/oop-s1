#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
  
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    // Add other test functions here
     //mixtures of both
     void testMixtures() {
        Addition addition;
        if (addition.add(5, -10) != -5) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }
     // zeroes
     void testZeros() {
        Addition addition;
        if (addition.add(0,0) != 0) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

     //big positive numbers, 
     void testBigPositiveNumbers() {
        Addition addition;
        if (addition.add(9999999,0) != 9999999) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }
    
};

#endif