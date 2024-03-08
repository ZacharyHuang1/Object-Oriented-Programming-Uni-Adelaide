#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);
extern bool is_palindrome(int arr[], int size);

int main() {
    int binary_digits1[] = {1, 0, 1, 1};
    int binary_digits2[] = {0, 1, 1, 0};
    int size1 = sizeof(binary_digits1) / sizeof(binary_digits1[0]);
    int size2 = sizeof(binary_digits2) / sizeof(binary_digits2[0]);

    std::cout << "Binary to decimal: " << binary_to_int(binary_digits1, size1) << std::endl;
    std::cout << "Binary to decimal: " << binary_to_int(binary_digits2, size2) << std::endl;

    int palindrome1[] = {1, 2, 2, 1};
    int palindrome2[] = {1, 2, 3, 2, 1};
    int palindrome3[] = {1, 0, 1};
    int size_palindrome1 = sizeof(palindrome1) / sizeof(palindrome1[0]);
    int size_palindrome2 = sizeof(palindrome2) / sizeof(palindrome2[0]);
    int size_palindrome3 = sizeof(palindrome3) / sizeof(palindrome3[0]);

    std::cout << "Is palindrome: " << is_palindrome(palindrome1, size_palindrome1) << std::endl;
    std::cout << "Is palindrome: " << is_palindrome(palindrome2, size_palindrome2) << std::endl;
    std::cout << "Is palindrome: " << is_palindrome(palindrome3, size_palindrome3) << std::endl;

    return 0;
}