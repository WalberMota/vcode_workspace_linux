/*
Autor: WalberMota
Data da Criação: 23/05/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
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
