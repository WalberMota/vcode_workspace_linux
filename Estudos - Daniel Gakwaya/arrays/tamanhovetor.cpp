#include <iostream>

int vetor[]{2, 3, 4, 5, 8, 12};
int count{std::size(vetor)}; // armazena o numero de elemento do array
                             // std::size() surge aparte do C++17
int mostravetor();           // prototipo de uma fonção que imprime o array

int main()
{
    mostravetor();
    std::cout << "]" << std::endl; // fecha a impressão do array

    std::cout << "Tamanho do vetor usando sizeof():" << sizeof(vetor) / 4 << std::endl;
    std::cout << "Tamanho do vetor usando std::size():" << std::size(vetor) << std::endl;

    return 0;
}


int mostravetor()

{
    std::cout << "vetor=[";
    for (int i = 0; i < count; i++)
    {
        std::cout << vetor[i];
        if (i < (count - 1))
            std::cout << ",";
    };

    return 0;

}

