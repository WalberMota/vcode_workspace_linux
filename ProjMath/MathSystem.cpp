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
    int Numero1, Numero2;

    std::cout << "\nDigite o primeiro numero : ";
    std::cin >> Numero1;
    std::cout << "\nDigite o segundo numero : ";
    std::cin >> Numero2;

    std::cout << "\nOperações matemáticas com os numeros escolhido:";
    std::cout << "\n\t| " << Numero1 << " + " << Numero2 << " = " << Somar(Numero1, Numero2);
    std::cout << "\n\t| " << Numero1 << " - " << Numero2 << " = " << Subtrair(Numero1, Numero2);
    std::cout << "\n\t| " << Numero1 << " X " << Numero2 << " = " << Multiplicar(Numero1, Numero2);
    std::cout << "\n\t| " << Numero1 << " / " << Numero2 << " = " << Dividir(Numero1, Numero2);
    std::cout << "\n\t| "
              << Numero1 << " elevado à " << Numero2 << " = " << Potencia(Numero1, Numero2);
    std::cout << "\n\t| A Raiz Quadrada de " << Numero1 << " = " << RaizQuad(Numero1);
    std::cout << "\n\t| A Raiz Quadrada de " << Numero2 << " = " << RaizQuad(Numero2);

    return 0;
}
