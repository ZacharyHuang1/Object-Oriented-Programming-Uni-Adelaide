#include <iostream>
#ifndef WORKSHOP_H
#define WORKSHOP_H

// Part 2
inline void changeValue(double* ptr) {
    *ptr = 42.0;
}

// Part 3
inline void printArray(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Part 4
inline double arrayMax(double* arr, int size) {
    double max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Part 7
inline double* dynamicArray(int size, double M) {
    double* arr = new double[size];
    for (int i = 0; i < size; i++) {
        arr[i] = M;
    }
    return arr;
}

#endif