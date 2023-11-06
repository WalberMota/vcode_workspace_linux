/*
Autor: Walber Mota
Data da Criação: 05/11/2023
Objetivos: Ajuste de saida na tela
*/

#include <iostream>
#include <iomanip>

int main()
{
   std::cout << "\nJustificação de tabela à direita: " << "\n\n";

    int col_width{15};
    std::cout << std::right;

    std::cout << std::setw(col_width) << "Primeiro Nome" << std::setw(col_width) << "Sobrenome" << std::setw(col_width) << "Idade\n";
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "32"<<'\n';
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Woody" << std::setw(col_width) << "18"<<'\n';
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Park" << std::setw(col_width) << "54"<<'\n';



    std::cout << "\n\nJustificação de tabela à esquerda: " << "\n\n";
    // col_width=15;
    std::cout << std::left;
    std::cout << std::setw(col_width) << "Primeiro Nome" << std::setw(col_width) << "Sobrenome" << std::setw(col_width) << "Idade"<<'\n';
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "32"<<'\n';
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Woody" << std::setw(col_width) << "18"<<'\n';
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Park" << std::setw(col_width) << "54"<<'\n';


    return EXIT_SUCCESS;
}
