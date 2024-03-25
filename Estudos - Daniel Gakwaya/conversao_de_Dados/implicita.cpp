#include <iostream>

int main(int argc, char const *argv[])
{

    double preco{45.6};
    int unidades{10};
    double total = preco * unidades;

    std::cout << "o preço por unidade é :" << preco << '\n';
    std::cout << "unidade adquidas      :" << unidades << "\n\n";
    std::cout << "Total da aquisição     :" << total << '\n'
              << std::endl;

    return 0;
}
