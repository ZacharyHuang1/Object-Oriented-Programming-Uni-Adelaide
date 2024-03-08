#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int decimal_value = 0;
    for (int i = 0; i < number_of_digits; i++) {
        decimal_value += binary_digits[i] * pow(2, number_of_digits - i - 1);
    }
    return decimal_value;
}

bool is_palindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            return false;
        }
    }
    return true;
}