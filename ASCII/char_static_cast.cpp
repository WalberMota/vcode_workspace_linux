#include<iostream>

int main(int argc, char const *argv[])
{
    char value=65;
    std::cout << "value " << value << "\n"; //exibe o caracter ASCII
    std::cout << static_cast <int> (value) << "\n"; //exibe o valor em inteiro
    return 0;
}
