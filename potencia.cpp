/*
Autor: Walber Mota 
Data da Criação: 27/04/2023
Objetivos: calcula x^y
*/

#include <iostream>

int pot(int base, int expoente)
{
    int contador, resultado = 1;
    for (contador = 0; contador < expoente; contador++)
    {
        resultado = resultado * base;
    }
    return resultado;
}

int main()
{
    int base,expo;
    std::cout <<"Calculo da potencia de um dado numero inteiro\n\n";
    std::cout <<"Digite a base ";
    std::cin>>base;
    std::cout <<"Digite o expoente ";
    std::cin>>expo;
    std::cout << "\nO resultado é "<<pot(base, expo) << "\n";

    return 0;
}
