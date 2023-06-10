/*
Autor: Walber Mota
Data da Criação: 04/05/2023
Objetivos:Lista os elementos da tabelas ASCII
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "  ASCII    Valor decimal\n";

    for (int n = 33; n <= 126; n++)
    {
        std::cout << "|   " << char(n) << " ======== " << n << "|\n";
    }

    return 0;
}
