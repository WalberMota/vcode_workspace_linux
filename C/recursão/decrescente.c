/*
Programa:hora.cpp
Linguagem: C
Data da Criação: 12 Dezembo 2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Estudo de funções recursivas.
*/

//cria sequencia decrescente de numero usando funções recursivas

#include<stdio.h>


int imprimirRecursivo(int x)
{
    if (x == 0)
        printf("%d",x);
    else
    {
        printf("%d, ",x);
        imprimirRecursivo(x-1);
    };

};


int main(void)
{

    imprimirRecursivo(30);

    return 0;
}
