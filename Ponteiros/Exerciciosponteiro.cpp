/* Autor:Walber Mota
 Linguagem: C++
 Criado em 24/05/2023
 Objetivo: Exercicios propostos pelo mestre Marcos Pacheco utilizando ponteiros.

Crie uma variável de nome Numero do Tipo inteiro e valor inicial igual a 234;
Crie um ponteiro de nome Ponteiro capaz de apontar para um variável do tipo inteiro.
Troque o valor de Numero para 1456 usando Ponteiro
Coloque o valor de Numero na tela usando Ponteiro
Mostre o endereço da memória RAM em que estão carregados, alocados as variáveis Ponteiro e Numero
Crie um outro ponteiro de nome OutroPtr
Faça OutroPtr apontar para a mesma variável que ptr aponta. 
Usando Ponteiro some 200 ao valor contido em Numero
Usando OutroPtr coloque na tela o valor de Numero

*/

#include <iostream>

int main(int argc, char const *argv[])
{
    int Numero = 234;
    int *ptr1 = nullptr;

    std::cout <<"\nVARIÁVEIS CRIADAS\n";
    std::cout << "\nNumero = " << Numero;
    std::cout << "\nponteiro ptr1 = " << ptr1<<"\n";

    ptr1 = &Numero;
    std::cout << "\nEndereço na RAM de 'Numero' colocado em ptr1(ptr1 = &Numero) = " << ptr1;

    *ptr1 = 1456;
    std::cout << "\nNovo valor de Numero usando a instrução '*ptr1=1456' " << Numero;

    std::cout << "\nValor da variável Numero visto atraveś de ptr1 = " << *ptr1;

    std::cout << "\nEndereço na RAM da variável Numero = " << &Numero;
    std::cout << "\nEndereço na RAM do ponteiro ptr1   = " << &ptr1;

    int *ptr2 = ptr1;

    std::cout << "\nNovo ponteiro ptr2 criado com o endereço que está armazenado em ptr1 = " << ptr2;

    *ptr1 +=200;

    std::cout << "\nAdicionado 200 ao valor de Numero via ptr1 (*ptr1 +=200) = " << Numero;

    std::cout << "\nO valor de Numero visto através de ptr2 = " << *ptr2;

    return 0;
}
