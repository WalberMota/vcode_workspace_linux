/*
Autor: Walber Mota
Data da Criação: 05/11/2023
Objetivos: Ajuste de saida na tela
*/

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Justificação de tabela à diireita (default): " << '\n';

    int col_width =20;
    std::cout << std::right;

    std::cout << std::setw(col_width) << "Primeiro Nome" << std::setw(col_width) << "Sobrenome" << std::setw(col_width) << "Idade\n";
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "29\n";


    return EXIT_SUCCESS;
}
