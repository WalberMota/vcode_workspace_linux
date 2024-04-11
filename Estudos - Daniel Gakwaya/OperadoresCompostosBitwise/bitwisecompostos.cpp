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

    std::cout << std::setw(lagura_coluna) <<"binario inicial" <<
    std::setw(lagura_coluna) << std::bitset<8>(binario) << std::endl;
    std::cout << std::endl;
    

    return 0;
}
