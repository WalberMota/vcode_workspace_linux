/*
Autor: Walber Mota
Data da Criação: 05/11/2023
Objetivos: Ajuste de saida na tela
*/

#include <iostream>
#include <iomanip>

int main()
{
//colocar os código de escape (line feed) separado dos textos.

   std::cout << '\n';
   std::cout << "Justificação de tabela à direita em coluna de com 13 caracteres: " << "\n\n";

    int col_width{13};

    std::cout << std::right;
    std::cout << std::setw(col_width) << "Primeiro Nome" << std::setw(col_width) \
              << "Sobrenome" << std::setw(col_width) << "Idade"<<'\n'; 
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "32"<<'\n';
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Woody" << std::setw(col_width) << "18"<<'\n';
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Park" << std::setw(col_width) << "54"<<'\n';


    std::cout << "\n\n";
    std::cout << "Justificação de tabela à esquerda em coluna com 15 caracteres: " << "\n\n";
    col_width=15; // dois caracteres a mais para evitar que os nomes das colunas fiquem colados
    std::cout << std::left;
    std::cout << std::setw(col_width) << "Primeiro Nome" << std::setw(col_width)\
              << "Sobrenome" << std::setw(col_width) << "Idade"<<'\n';
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "32"<<'\n';
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Woody" << std::setw(col_width) << "18"<<'\n';
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Park" << std::setw(col_width) << "54"<<'\n';

// Internal Justified : o sinal é justifcado à esquerda e o dado à direta.
    std::cout << '\n';
    std::cout << "Internal Justified: " << '\n';
    std::cout << std::right;
    std::cout << std::setw(7) << -1235 << '\n';
    std::cout << std::internal;
    std::cout << std::setw(7) << -1235 << '\n';

// Tabela com caracter preenchendo os espaços em branco.
    std::cout << "\n\n";
    
    std::cout << "Justificação de tabela à esquerda em coluna com 15 caracteres: " << "\n\n";
    col_width=15; // dois caracteres a mais para evitar que os nomes das colunas fiquem colados
    std::cout << std::left;
    std::cout << std::setw(col_width) << "Primeiro Nome" << std::setw(col_width)\
              << "Sobrenome" << std::setw(col_width) << "Idade"<<'\n';
    std::cout <<std::setfill ('-'); //esta instrução preenche os espaços em branco com o caracter '-'.
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "32"<<'\n';
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Woody" << std::setw(col_width) << "18"<<'\n';
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Park" << std::setw(col_width) << "54"<<'\n';

//boolapha e noboolalpha: controla o formato apresentado na tela por um booleano(1/0 ou true/false)

bool condicao1 {true};
bool condicao2 {false};

std::cout << "\n\n";
std::cout << "condição 1: " << condicao1 << '\n';
std::cout << "condição 2: " << condicao2 << '\n';

std::cout << std::boolalpha;
std::cout << "\ncondição 1: " << condicao1 << '\n';
std::cout << "condição 2: " << condicao2 << '\n';

std::cout << std::noboolalpha;
std::cout << "\ncondição 1: " << condicao1 << '\n';
std::cout << "condição 2: " << condicao2 << '\n';

//mostrando o sinal + dos numeros positivos

int numero_pos {34};
int numero_neg {-25};
std::cout << "\n\n";

std::cout << "Sem uso de 'showpos' " << '\n';
std::cout << "numero positivo: " << numero_pos << '\n';
std::cout << "numero negativo: " << numero_neg << "\n\n";

std::cout << "Com uso de 'showpos' " << '\n';
std::cout << std::showpos;
std::cout << "numero positivo: " << numero_pos << '\n';
std::cout << "numero negativo: " << numero_neg << "\n\n";

std::cout << "Com uso de 'noshowpos' " << '\n';
std::cout << std::noshowpos;
std::cout << "numero positivo: " << numero_pos << '\n';
std::cout << "numero negativo: " << numero_neg << "\n\n";





    return EXIT_SUCCESS;

}
