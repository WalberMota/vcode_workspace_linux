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
    
    std::cout << "Justificação com preenchimento dos espaços em branco com caracter qualquer" << "\n\n";
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
std::cout << std::fixed;
std::cout << "a: " << a << "\n";
std::cout << "b: " << b << "\n";
std::cout << "c: " << c << " (numero é tão pequeno que no formato fixed é representado como zero)\n";

std::cout << "\nvalores double (forçando o formato científico com std::scientific)" << '\n';
std::cout << std::scientific;
std::cout << "a: " << a << "\n";
std::cout << "b: " << b << "\n";
std::cout << "c: " << c << "\n";

std::cout << "\nForçando o default com 'std::unsetf (std::ios::scientific|std::iios::fixed)'" << '\n';
std::cout.unsetf(std::ios::scientific | std::ios::fixed); //Hack
std::cout << "a: " << a << "\n";
std::cout << "b: " << b << "\n";
std::cout << "c: " << c << "\n";

//uso de setprecision() para determinar o numero de dígitos em numeração com ponto flutuante.

std::cout << "\n\n*******************\n";

a = 3.1415926535897932384626433832795;

std::cout << "precisão numérica no terminal" <<'\n';
std::cout << "default = (6): " << a << "\n";
std::cout << std::setprecision(10);
std::cout << "precisão (10): " << a << "\n";
std::cout << std::setprecision(20);
std::cout << "precisão (20): " << a << "\n";

//se a precisão é maior que a suportada pelo tipo numérico. O restante é truncado.


//showpoint e noshowpoiint: mostra zero à direita, se necessário
//força a saída do ponto decimal

std::cout << "\n\n*******************\n";

double d {34.1};
double e {101.99};
double f {12.00};
int    g {45};

std::cout << std::setprecision(6); //coloca a precisão no valor default
std::cout << "noshowpoint (default): " <<std::dec << '\n';
std::cout << "d: " << d << '\n';
std::cout << "e: " << e << '\n';
std::cout << "f: " << f << '\n';
std::cout << "g: " << g << '\n';

std::cout << "\nshowpoint: " << '\n';
std::cout <<std::showpoint << '\n'; //força a exibição do ponto decimal, exceto para tipos 'int'
std::cout << "d: " << d << '\n';
std::cout << "e: " << e << '\n';
std::cout << "f: " << f << '\n';
std::cout << "g: " << g << '\n';

    return EXIT_SUCCESS;

}
