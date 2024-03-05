#include <iostream>
#include <string>

std::string ConvertToBinary(int decimalNumber) {
    std::string binaryNumber = "";
    while (decimalNumber > 0) {
        int remainder = decimalNumber % 2;
        binaryNumber = std::to_string(remainder) + binaryNumber;
        decimalNumber /= 2;
    }
    return binaryNumber;
}

int main() {
    int number;
    std::cout << "Enter a decimal number: ";
    std::cin >> number;
    std::string binaryNumber = ConvertToBinary(number);
    std::cout << "The binary representation is: " << binaryNumber << std::endl;
    return 0;
}