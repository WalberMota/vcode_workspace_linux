/*
Autor: Walber Mota
Data da Criação: 01/04/2023
Objetivos: Calcular o número PI, deve-se realizar o seguinte cálculo matemático:
pi = 4*(1 - 1/3 + 1/5 - 1/7 + 1/9 ... 1/n) Série de Leibniz
*/
#include <iostream>
#include <stdio.h>

int main()
{
    double max;
    std::cout << "calcular o valor de pi usando a série de Leibniz\n";
    std::cout << "O número pi é gerado por sucessivas somas e subtrações x vezes\n\n";
    std::cout << "Digite um valor para cálculo de pi: ";
    std::cin >> max;

    double pi = 4;
    double operador = -1;
    double i;

    for (i = 0; i < max; i++)
    {
        pi += operador * (4 / (3 + 2 * i));
        operador *= -1;
    }
    printf("Resultado encontrado: %.20f...\n", pi);
    //std::cout << "Resultado = " << pi;

    return 0;
}
