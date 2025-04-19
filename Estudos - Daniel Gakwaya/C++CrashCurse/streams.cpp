#include <iostream>

int main(int argc, char const *argv[])
{
    std::cerr << "atenção!!\n";
    std::clog << "Esta é uma mensagem de log" << std::endl;

    // Usar std::flush garante que a saída seja exibida imediatamente,
    // o que pode ser crucial para aplicativos em tempo real ou quando
    // você precisa de feedback imediato.
    // Alternativamente, std::endl pode ser usado, ele insere
    // um caractere de nova linha e também limpa o fluxo

    std::cout << "Beginning computations..." << std::flush << std::endl;

    return 0;
}
