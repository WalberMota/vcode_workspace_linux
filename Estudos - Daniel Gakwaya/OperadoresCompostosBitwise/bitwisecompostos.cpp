#include <iostream>
#include <iomanip>
#include <bitset>

const int lagura_coluna {20};

int main(int argc, char const *argv[])
{

    std::cout << "Operação com bitwise Compostos" << "/n";

    unsigned char binario{0b00110100};

    //Imprimindo o valor inicial
    std::cout << std::endl;
    std::cout << "valor inicial: " << std::endl;

    std::cout << std::setw(lagura_coluna) <<"binario :" <<
    std::setw(lagura_coluna) << std::bitset<8>(binario) << std::endl;
    std::cout << std::endl;

    //realizando deslocamento à esquerda (left shift)
    std::cout << std::endl;
    std::cout << "Deslocar para a esquerda 2 posições de bits no lugar: " << std::endl;
    binario <<=2;
    std::cout << std::setw(lagura_coluna) <<"binario :" <<
    std::setw(lagura_coluna) << std::bitset<8>(binario) << std::endl;
    std::cout << std::endl;


    return 0;
}
