/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 11/07/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  otimização do código com operador ternário.
*/

#include <iostream>

int main()
    {
    int a, b,c,maximo;
    std::cout <<"Digite o primeiro numero ";
    std::cin>>a;

    std::cout <<"Digite o segundo numero ";
    std::cin>>b;

    std::cout <<"Digite o terceiro numero ";
    std::cin>>c;

    maximo=(a>b && a>c)? a:((b>c)?b:c);

    std::cout<<"o maior numero é "<<maximo;

    return 0;
    }
