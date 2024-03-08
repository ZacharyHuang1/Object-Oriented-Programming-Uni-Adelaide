#include <iostream>

extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main() {
    int arr1[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int arr2[] = {};
    int arr3[] = {-5, -2, 0, 3};

    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    int length3 = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "Sum of min and max of arr1: " << sum_min_max(arr1, length1) << std::endl;
    std::cout << "Sum of min and max of arr2: " << sum_min_max(arr2, length2) << std::endl;
    std::cout << "Sum of min and max of arr3: " << sum_min_max(arr3, length3) << std::endl;

    return 0;
}