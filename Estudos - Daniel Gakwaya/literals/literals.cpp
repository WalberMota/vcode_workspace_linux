// c++14 em diante
#include <iostream>

int main(int argc, char const *argv[])
{
    signed long long int signed_long_long_int{1234ll};
    unsigned int prize{1'500'00'0u};
    std::cout << "O preço é : " << prize << std::endl;
    std::cout << "signed_long_long_int : " << signed_long_long_int << std::endl;

    // Com sistemas numéricos - Hex: prefixo com 0x
    unsigned int hex_number1{0x22BU}; // Decimal 555
    int hex_number2{0x400};           // Decimal 1024
    std::cout << std::hex << "\nO numero hexadecimal_1 é : " << hex_number1 << std::endl;
    std::cout << std::dec << "O numero hexadecimal_2 é : " << hex_number2 << std::endl;

    unsigned int binary_literal{0b11111111u}; // 255 dec
    std::cout << "\nA literal binária é : " << binary_literal << std::endl;

    return 0;
}
