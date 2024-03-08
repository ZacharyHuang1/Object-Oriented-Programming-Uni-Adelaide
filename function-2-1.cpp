#include <iostream>
#include <string>
#include <bitset>

void print_binary_str(std::string decimal_number) {
    int decimal_value = std::stoi(decimal_number);
    std::string binary_str = std::bitset<32>(decimal_value).to_string();
    size_t start_pos = binary_str.find_first_not_of('0');
    if (start_pos != std::string::npos) {
        binary_str = binary_str.substr(start_pos);
    } else {
        binary_str = "0";
    }
    std::cout << binary_str << std::endl;
}
