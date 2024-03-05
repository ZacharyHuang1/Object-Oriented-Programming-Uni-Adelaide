#include <iostream>
#include <bitset>

// Function to add two binary numbers
std::string binaryAdd(std::string a, std::string b) {
    std::string result = "";
    int sum = 0;
    
    // Make the strings the same length
    while (a.length() < b.length()) a = "0" + a;
    while (b.length() < a.length()) b = "0" + b;
    
    // Add binary numbers
    for (int i = a.length() - 1; i >= 0; i--) {
        sum += (a[i] - '0') + (b[i] - '0');
        result = char(sum % 2 + '0') + result;
        sum /= 2;
    }
    
    // If there is a carry over, add it to the result
    if (sum) result = '1' + result;
    
    return result;
}

// Function to subtract two binary numbers
std::string binarySubtract(std::string a, std::string b) {
    // Convert to bitset for easy subtraction
    std::bitset<32> bs_a(a);
    std::bitset<32> bs_b(b);
    
    // Perform subtraction and convert back to string
    std::bitset<32> bs_result = bs_a.to_ulong() - bs_b.to_ulong();
    return bs_result.to_string();
}

// Function to perform right shift operation
std::string rightShift(std::string a) {
    return std::bitset<32>(std::bitset<32>(a).to_ulong() >> 1).to_string();
}

// Function to perform left shift operation
std::string leftShift(std::string a) {
    return std::bitset<32>(std::bitset<32>(a).to_ulong() << 1).to_string();
}

int main() {
    std::string binary1 = "111011101011";
    std::string binary2 = "11";
    std::string binary3 = "1110101";
    
    // Perform addition
    std::string additionResult1 = binaryAdd(binary1, binary2);
    std::string additionResult2 = binaryAdd(binary1, binary1);
    std::cout << "Addition Result 1: " << additionResult1 << " (Decimal: " << std::bitset<32>(additionResult1).to_ulong() << ")" << std::endl;
    std::cout << "Addition Result 2: " << additionResult2 << " (Decimal: " << std::bitset<64>(additionResult2).to_ullong() << ")" << std::endl;
    
    // Perform subtraction
    std::string subtractionResult1 = binarySubtract(binary1, binary2);
    std::string subtractionResult2 = binarySubtract(binary1, binary3);
    std::cout << "Subtraction Result 1: " << subtractionResult1 << " (Decimal: " << std::bitset<32>(subtractionResult1).to_ulong() << ")" << std::endl;
    std::cout << "Subtraction Result 2: " << subtractionResult2 << " (Decimal: " << std::bitset<32>(subtractionResult2).to_ulong() << ")" << std::endl;
    
    // Perform right shift
    std::string rightShiftResult = rightShift(binary1);
    std::cout << "Right Shift Result: " << rightShiftResult << " (Decimal: " << std::bitset<32>(rightShiftResult).to_ulong() << ")" << std::endl;
    
    // Perform left shift
    std::string leftShiftResult = leftShift(binary1);
    std::cout << "Left Shift Result: " << leftShiftResult << " (Decimal: " << std::bitset<32>(leftShiftResult).to_ulong() << ")" << std::endl;
    
    return 0;
}