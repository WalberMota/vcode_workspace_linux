/*
Pilar de qualquer loop
1-Iterator
2-Ponto de partida
3-Teste
4-Incremento ou decremento
5-Corpo do loop
*/
#include<iostream>

int main(int argc, char const *argv[])
{
    const size_t LIMITE{3};
    size_t i{}; //declara o iterator
    while (i<LIMITE) // aqui ocorre o teste
    {
        std::cout << i << " : Eu amo c++ \n";
        ++i;//incrementa o iterator
    }
    std::cout <<"\n\n" << i;

    return 0;
}
