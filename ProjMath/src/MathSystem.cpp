/*
Autor: Walber Mota
Data da Criação:
Objetivos:
Linguagem: C/C++
*/
#include <iostream>
#include "LibMath.h"


int main()
{
    int Numero1,Numero2;

    std::cout<<"\nDigite o primeiro numero : ";
    std::cin >> Numero1;
    std::cout<<"\nDigite o segundo numero : ";
    std::cin >> Numero2;

    std::cout <<"\nOperações matemáticas com os numeros escolhido";
    std::cout << "\nSoma: "<< Somar(Numero1,Numero2);
    std::cout << "\nSubtração: "<< Subtrair(Numero1,Numero2);
    std::cout << "\nMultiplicação: "<< Multiplicar(Numero1,Numero2);
    std::cout << "\nDivisão: "<< Dividir(Numero1,Numero2);
    std::cout << "\nPotencia: "<< Potencia(Numero1,Numero2);
    std::cout << "\nA Raiz Quadrada de "<< Numero1 << " é "<< RaizQuad(Numero1);
    std::cout << "\nA Raiz Quadrada de "<< Numero2 << " é "<< RaizQuad(Numero2);

    return 0;
}
