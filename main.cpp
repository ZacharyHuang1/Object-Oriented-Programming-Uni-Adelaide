#include <iostream>
#include "workshop.h"

int main() {
    // Part 2
    double value = 10.0;
    std::cout << "Original value: " << value << std::endl;
    changeValue(&value);
    std::cout << "Value after changeValue: " << value << std::endl;
    std::cout << std::endl;

    // Part 3
    double arr[] = {1.2, 3.4, 5.6, 7.8, 9.0};
    int size = sizeof(arr) / sizeof(double);
    printArray(arr, size);
    std::cout << std::endl;

    // Part 4
    double maxValue = arrayMax(arr, size);
    std::cout << "Maximum value in the array: " << maxValue << std::endl;
    std::cout << std::endl;

    // Part 7
    double M = 2.5;
    int newSize = 5;
    double* dynamicArr = dynamicArray(newSize, M);
    std::cout << "Dynamic array initialized with " << M << ": ";
    printArray(dynamicArr, newSize);
    delete[] dynamicArr;

    return 0;
}