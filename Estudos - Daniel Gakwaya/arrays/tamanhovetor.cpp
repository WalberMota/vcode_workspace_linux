#include <iostream>

int vetor[4]{2, 3, 4, 5};
int mostravetor();

int main()
{
    mostravetor();
    std::cout << "]" << std::endl;
    std::cout << "Tamanho do vetor usando sizeof():" << sizeof(vetor) / 4 << std::endl;
    std::cout << "Tamanho do vetor usando std::size():" << std::size(vetor) << std::endl;

    return 0;
}

int mostravetor()
{
    std::cout << "vetor=[";
    for (int i = 0; i < std::size(vetor); i++)
    {
        std::cout << vetor[i];
        if (i < std::size(vetor) - 1)
            std::cout << ",";
    };

    return 0;
}
