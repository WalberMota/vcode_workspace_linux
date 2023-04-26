/*
Autor: WalberMota
Data da Criação: 26/04/2023
Objetivos: separar os numeros de um int com cinco digitos
Linguagem C++
 */

#include <iostream>

int main()
{
    int sobra;
    int dig;
    int modulo = 10000;
    int num = 42339;
    std::cout << "insira um numero de cinco dígitos" << std::endl;
    std::cin >> num;
separa:
    dig = num % modulo;        // módulo (resto da divisão) por 10
    sobra = int(num / modulo); // divisão inteira por 10
    modulo /= 10;
    num = dig;
    std::cout << sobra << "   ";
    if (dig == 0)
    {
        std::cout << std::endl;
        return 0;
    }

    goto separa;
}