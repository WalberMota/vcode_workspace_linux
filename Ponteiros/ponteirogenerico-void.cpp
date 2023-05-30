/*
Autor: WalberMota
Data da Criação: 23/05/2023
Objetivos: cria um ponteiro void (generico) e obtem o valor de dois tipos diferentes de variáveis.
Linguagem C++
 */


#include <iostream>

int main(int argc, char const *argv[])
{
    int Numero = 4890;
    char Letra = 'E';

    void *ptrG; // criando um ponterio genérico (usando a atribuição void)

    ptrG = &Letra; // passa o endereço na memoria RAM da variável Letra dizendo ao compilador o tipo

    std::cout << "Valor de da variável Letra via ponteiro generico criado " << *(char *)ptrG << "\n";

    ptrG = &Numero; // passa o endereço na memória RAM da variável Numero dizendo ao compilador o tipo

    std::cout << "Valor da variável Numero via ponteiro genérico criado " << *(int *)ptrG << "\n";

    return 0;
}
