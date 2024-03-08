#include <string>

extern void print_binary_str(std::string decimal_number);

int main() {
    std::string input1 = "0";
    std::string input2 = "789";
    std::string input3 = "123456789";

    print_binary_str(input1);
    print_binary_str(input2);
    print_binary_str(input3);

    return 0;
}