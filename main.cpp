#include <iostream>
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    
    int array1[6] = {2,4,6,8,10,12};
    std::cout << "The number is: " << count(array1, 6) << std::endl;

    int array2[3] = {0,1,4};
    std::cout << "The number is: " << count(array2, 3) << std::endl;

    int array3[2] = {-2,5};
    std::cout << "The number is: " << count(array3, 2) << std::endl;    return 0;
}
