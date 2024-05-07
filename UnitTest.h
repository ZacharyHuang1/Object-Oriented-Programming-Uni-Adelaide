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
        int result;

        // Test 1: Check addition of positive numbers
        result = addition.add(1, 2);
        if (result != 3) {
            std::cout << "Test 1 failed! Expected 3, got " << result << std::endl;
        }

        // Test 2: Check addition of negative numbers
        result = addition.add(-1, -2);
        if (result != -3) {
            std::cout << "Test 2 failed! Expected -3, got " << result << std::endl;
        }

        // Test 3: Check addition of a positive and a negative number
        result = addition.add(-1, 2);
        if (result != 1) {
            std::cout << "Test 3 failed! Expected 1, got " << result << std::endl;
        }

        // Test 4: Check addition of zero
        result = addition.add(0, 0);
        if (result != 0) {
            std::cout << "Test 4 failed! Expected 0, got " << result << std::endl;
        }
    }
};