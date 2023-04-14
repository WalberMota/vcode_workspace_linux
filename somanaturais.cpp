#include <iostream>

int main(int argc, char const *argv[])
{
inicio:
    //system("clear");

    int numnat;
    int c;
    int acumulador;
    std::cout << "***********Soma de números naturais************\n";
    std::cout << "Digite até qual número inteiro e natural você quer somar: ";
    std::cin >> numnat;
    if (numnat < 0)
    {
        std::cout << "numero inválido!!\n\n";
        goto inicio;
    }
    
    for (c = 1; c <= numnat; c++)
    {
        acumulador += c;
        //std::cout << numnat << "\t" << c << "\t" << acumulador<<"\n";
    }
    std::cout << "\nA soma dos "<<numnat << " primeiros numeros naturais é "<<acumulador;
    return 0;
}
