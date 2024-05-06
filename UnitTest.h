#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }

        if (addition.substract(1, 2) != -1) {
            std::cout << "Test 2 failed!" << std::endl;
        }
        if (addition.multiple(1, 2) != 2) {
            std::cout << "Test 3 failed!" << std::endl;
        }
        if (addition.divide(2, 1) != 2) {
            std::cout << "Test 4 failed!" << std::endl;
        }
        // Add more tests here
    }
};