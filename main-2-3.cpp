#include <iostream>

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {};
    int arr4[] = {1};

    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    int length3 = sizeof(arr3) / sizeof(arr3[0]);
    int length4 = sizeof(arr4) / sizeof(arr4[0]);

    std::cout << "Sum (if palindrome) of arr1: " << sum_if_palindrome(arr1, length1) << std::endl;
    std::cout << "Sum (if palindrome) of arr2: " << sum_if_palindrome(arr2, length2) << std::endl;
    std::cout << "Sum (if palindrome) of arr3: " << sum_if_palindrome(arr3, length3) << std::endl;
    std::cout << "Sum (if palindrome) of arr4: " << sum_if_palindrome(arr4, length4) << std::endl;

    return 0;
}