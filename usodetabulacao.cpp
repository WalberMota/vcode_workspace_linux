/*
Autor: Walber Mota
Data da Criação: 27/04/2023
Objetivos: usar tabulação para uma tabela com valores de x, x² e x³"
*/

#include <iostream>

int main()
{
    int num;

    std::cout<<"------------------\n";
    std::cout<<"x"<<"\tx²"<<"\tx³\n";
    std::cout<<"------------------\n";

    for (num = 0; num <= 10; num++)
    {
        std::cout<<num<<"\t"<<num*num<<"\t"<<num*num*num<<"\n";
    }

    return EXIT_SUCCESS;
}
