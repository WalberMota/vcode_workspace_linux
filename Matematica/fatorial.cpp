/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 18/09/2023
Version 01.00
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Cálculo do fatorial de um dado numero inteiro.
*/

#include <iostream>

int numero{0};

int fatorial(int numero);

int main(int argc, char const *argv[])
{
    std::cout << "Calculado do fatorial de um numero inteiro\n";
    std::cout << "Digite um numero: ";
    std::cin >> numero;
    std::cout << "\n"
              << numero << "! = " << fatorial(numero);
    return 0;
}

int fatorial(int numero)
{
    return (numero <= 1) ? 1 : numero * fatorial(numero - 1);
}
