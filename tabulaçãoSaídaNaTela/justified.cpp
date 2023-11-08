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

   std::cout << "\n*******************\n";
   std::cout << "Justificação de tabela à direita em coluna de com 13 caracteres: " << "\n\n";

    int col_width{13};

    std::cout << std::right;
    std::cout << std::setw(col_width) << "Primeiro Nome" << std::setw(col_width) \
              << "Sobrenome" << std::setw(col_width) << "Idade"<<'\n'; 
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "32"<<'\n';
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Woody" << std::setw(col_width) << "18"<<'\n';
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Park" << std::setw(col_width) << "54"<<'\n';


    std::cout << "\n\n*******************\n";
    std::cout << "Justificação de tabela à esquerda em coluna com 15 caracteres: " << "\n\n";
    col_width=15; // dois caracteres a mais para evitar que os nomes das colunas fiquem colados
    std::cout << std::left;
    std::cout << std::setw(col_width) << "Primeiro Nome" << std::setw(col_width)\
              << "Sobrenome" << std::setw(col_width) << "Idade"<<'\n';
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "32"<<'\n';
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Woody" << std::setw(col_width) << "18"<<'\n';
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Park" << std::setw(col_width) << "54"<<'\n';

// Internal Justified : o sinal é justifcado à esquerda e o dado à direta.
    std::cout << "\n*******************\n";
    std::cout << "Internal Justified: " << '\n';
    std::cout << std::right;
    std::cout << std::setw(7) << -1235 << '\n';
    std::cout << std::internal;
    std::cout << std::setw(7) << -1235 << '\n';

// Tabela com caracter preenchendo os espaços em branco.
    std::cout << "\n\n*******************\n";
    
    std::cout << "Justificação com preenchimento dos espppaços em branco com caracter qualquer" << "\n\n";
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

std::cout << "\n\n*******************\n";
std::cout << "condição 1: " << condicao1 << '\n';
std::cout << "condição 2: " << condicao2 << '\n';

std::cout << std::boolalpha;
std::cout << "\ncondição 1: " << condicao1 << '\n';
std::cout << "condição 2: " << condicao2 << '\n';

std::cout << std::noboolalpha;
std::cout << "\ncondição 1: " << condicao1 << '\n';
std::cout << "condição 2: " << condicao2 << '\n';

//showpos e noshowpos : mostra ou oculta o sinal de positivo.

int numero_pos {34};
int numero_neg {-25};
std::cout << "\n\n";

std::cout << "Sem uso de 'showpos' *******************" << '\n';
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

//Exibindo em diferentes sistemas numericos: std::dec, std::hex,std::oct


int num_pos {67};
int num_neg {-86};
double num_double {45.32};

std::cout << "\n\n*******************\n";

std::cout << "Formato base padrão"<<'\n';
std::cout << "num_pos: " << num_pos << '\n';
std::cout << "num_neg: " << num_neg << '\n';
std::cout << "num_double: " << num_double << "\n\n";

std::cout << "\nNúmero Positivo em diferentes Bases"<<'\n';
std::cout << "num_pos (dec): " << std::dec << num_pos << '\n';
std::cout << "num_neg (hex): " << std::hex << num_pos << '\n';
std::cout << "num_double (oct): " << std::oct << num_pos << '\n';

std::cout << "\nNúmero Negativo em Diferentes Bases"<<'\n';
std::cout << "num_pos (dec): " << std::dec << num_neg << '\n';
std::cout << "num_neg (hex): " << std::hex << num_neg << '\n';
std::cout << "num_double (oct): " << std::oct << num_neg << '\n';

std::cout << "\nNúmero Double em Diferentes Bases"<<'\n';
std::cout << "num_pos (dec): " << std::dec << num_double << '\n';
std::cout << "num_neg (hex): " << std::hex << num_double << '\n';
std::cout << "num_double (oct): " << std::oct << num_double << '\n';

//Uso de uppercase e nouppercase (maiúscula e minúscula):
num_pos = 6785;

std::cout << "\n\n*******************\n";

std::cout << "\nO padrão é nouppercase:"<<'\n';
std::cout << "num_pos (dec): " << std::dec << num_pos << '\n';
std::cout << "num_neg (hex): " << std::hex << num_pos << '\n';


std::cout << "\nUsando uppercase:"<<'\n';
std::cout << std::uppercase;
std::cout << "num_pos (dec): " << std::dec << num_pos << '\n';
std::cout << "num_neg (hex): " << std::hex << num_pos << '\n';

//notação científica e fixa no terminal

double a{3.1415926535897932384626433832795};
double b{2006.0};
double c{1.34e-10};

std::cout << "\n\n*******************\n";
std::cout << "valores double como default a notação científica é usada quando necessário" << '\n';
std::cout << "a: " << a << "\n";
std::cout << "b: " << b << "\n";
std::cout << "c: " << c << "\n";

std::cout << "\nvalores double (fixados com std::fixed)" << '\n';
std::cout << "a: " << a << "\n";
std::cout << "b: " << b << "\n";
std::cout << "c: " << c << "\n";

    return EXIT_SUCCESS;

}
